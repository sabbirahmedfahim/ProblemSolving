#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    string x = s; reverse(all(x));
    if(s == x)
    {
        cout << 0 << nl; return;
    }

    // i have to erase at least one letter, though still chance for impossible

    int mn = 1E6;
    for (char c = 'a'; c <= 'z'; c++)
    {
        bool ok = true; 
        int cnt = 0;
        for (int l = 0, r = n-1; l <= r && ok; )
        {
            if(s[l] == s[r]) 
            {
                l++, r--; continue;
            }

            while (l < r && s[l] != s[r])
            {
                if(s[l] == c) l++, cnt++;
                else if(s[r] == c) r--, cnt++;
                else 
                {
                    ok = false; break;
                }
            }
        }
        if(ok)
        {
            mn = min(mn, cnt);
        }
    }

    if(mn == 1E6) cout << -1 << nl;
    else cout << mn << nl;
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