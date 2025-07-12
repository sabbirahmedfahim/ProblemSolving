// took hints from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int gcd(int a, int b) { while (b != 0) { int temp = b; b = a % b; a = temp; } return a; }
void solve()
{
    int n, l, r; cin >> n >> l >> r;
    
    vector<int> res;

    for (int i = 1; i <= n && l <= r; l++)
    {
        if(res.size() == n) break;

        if(l % i == 0)
        {
            res.push_back(l);
            i++;
        }
    }
    
    if(res.size() == n)
    {
        cout << "YES" <<nl;
        print(res);
    }
    else cout << "NO" << nl;
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
