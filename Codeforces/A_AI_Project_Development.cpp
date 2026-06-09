#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x, y, z; cin >> n >> x >> y >> z;

    int res1 = 0, res2 = 0;
    int tmp = n;

    while (tmp > 0)
    {
        tmp -= x;
        tmp -= y;

        res1++;
    }
    
    tmp = n;
    while (tmp > 0)
    {
        tmp -= x;
        if(z) z--;
        else tmp -= 10 * y;

        res2++;
    }
    
    cout << min(res1, res2) << nl;
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