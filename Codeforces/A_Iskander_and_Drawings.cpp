#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int mx = 0;
    for (int i = 0; i < n; )
    {
        int curr = 0;
        while (i < n && s[i] == '*')
        {
            i++;
        }
        while (i < n && s[i] == '#')
        {
            curr++;
            i++;
        }
        
        if(curr) mx = max(mx, curr);
    }

    
    int cnt = 0;
    while (mx)
    {
        cnt++;
        mx -= min(2, mx);
    }
    cout << cnt << nl;
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