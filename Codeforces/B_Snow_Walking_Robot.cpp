// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int grid[1000][1000];
void solve()
{
    string s; cin >> s;
    int l = 0, r = 0, u = 0, d = 0;
    for(auto e : s)
    {
        if(e == 'L') l++;
        if(e == 'R') r++;
        if(e == 'U') u++;
        if(e == 'D') d++;
    }

    string ans;
    l = min(l, r);
    r = l;
    u = min(u, d); 
    d = u;
    // cout << l << " " << r << " " << u << " " << d << nl;

    for(auto e : s)
    {
        if(e == 'L' && l > 0) 
        {
            l--; ans += 'L';
        }
        if(e == 'R' && r > 0) 
        {
            r--; ans += 'R';
        }
        if(e == 'U' && u > 0) 
        {
            u--; ans += 'U';
        }
        if(e == 'D' && d > 0) 
        {
            d--; ans += 'D';
        }
    }

    if(ans.empty()) cout << "Empty" << nl;
    else cout << ans << nl;

    memset(grid, 0, sizeof(grid));


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