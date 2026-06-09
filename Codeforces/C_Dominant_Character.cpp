#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    for (int i = 2; i <= 70; i++)
    {
        int a = 0, b = 0, c = 0;
        for (int l = 0, r = 0; r < n; r++)
        {
            a += s[r] == 'a';
            b += s[r] == 'b';
            c += s[r] == 'c';
            
            if(r - l + 1 == i)
            {
                if(a > b && a > c)
                {
                    cout << i << nl; return;
                }
                a -= s[l] == 'a';
                b -= s[l] == 'b';
                c -= s[l] == 'c';
                l++;
            }
        }
    }
    
    cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}