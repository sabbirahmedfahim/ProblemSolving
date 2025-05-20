#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; char curC; string s; cin >> n >> curC >> s;

    if(curC == 'g')
    {
        cout << 0 << nl; return;
    }

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i; ll cur = 0;
        if(s[i] == curC)
        {
            while (i < n && s[i] != 'g')
            {
                i++;
            }

            cur += i - j;
            // cout << cur << nl;

            if(i == n)
            {
                cur++;
                for (int i = 0; i < n; i++)
                {
                    while (i < n && s[i] != 'g')
                    {
                        i++;
                    }
                    cur += i - 1;
                    break;
                }
            }
            
            res = max(res, cur);
        }
    }
    
    cout << res << nl;
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