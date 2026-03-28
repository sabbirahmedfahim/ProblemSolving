#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y ; cin >> x >> y;

    int ans;
    
    if(min(x, y) == 0)
    {
        int X = max(x, y);
        ans = 2;
        for (int i = 1; i < 29; i++)
        {
            if(pow(2, i) == X)
            {
                ans = max(ans, i);
            }
        }
    }
    else if(x % 2 != y % 2 || max(x, y) == 1) ans = 1;
    else if(x == y) 
    {
        int X = max(x, y);
        ans = 2;
        for (int i = 1; i < 29; i++)
        {
            if(pow(2, i) == X)
            {
                ans = max(ans, i);
            }
        }
    }
    else ans = 2;

    cout << ans << nl;

    for (int i = 0; i < x; i++)
    {
        cout << 1 << ' ';
    }
    for (int i = 0; i < y; i++)
    {
        cout << -1 << ' ';
    }
    cout << nl; 
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