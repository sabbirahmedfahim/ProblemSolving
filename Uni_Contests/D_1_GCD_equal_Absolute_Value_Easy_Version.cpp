// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int gcd(int a, int b) { while (b != 0) { int temp = b; b = a % b; a = temp; } return a; }
void solve()
{
    int n; cin >> n;

    ll cnt = n-1;
    for (int i = 2; i <= n; i++)
    {
        if((i + i) <= n && gcd(i, 2 * i) == i) cnt++;
    }
    
    // cout << cnt << nl;

    ll cnt2 = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(gcd(i, j) == abs(i - j)) 
            {
                cnt2++;
                cout << i << " " << j << nl;
            }
        }
    }
    
    cout << nl << cnt << " != " << cnt2 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}