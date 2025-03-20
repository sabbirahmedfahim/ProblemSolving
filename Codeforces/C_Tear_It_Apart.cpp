// resolved [heavy implementation based :)]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s; 

    ll mn = LLONG_MAX;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        ll longestBlock = 0, cur = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == ch)
            {
               longestBlock = max(longestBlock, cur);
               cur = 0;
            }
            else cur++;
        }
        longestBlock = max(longestBlock, cur);
        // cout << ch << " --> " << longestBlock << nl;
        mn = min(mn, longestBlock);
    }

    // cout << mn << nl;
    
    if(mn == 0) cout << 0 << nl;
    else 
    {
        int res = 0;
        while (mn)
        {
            mn >>= 1;
            res++;
        }
        cout << res << nl;
    }
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