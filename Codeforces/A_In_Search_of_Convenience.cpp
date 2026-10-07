#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int dis(int x1, int x2, int y1, int y2)
{
    int D = abs(x1 - x2) * abs(x1 - x2);
    int DD = abs(y1 - y2) * abs(y1 - y2);
    int DDD = D + DD;

    int DDDD = sqrt(DDD);
    if(DDDD * DDDD != DDD) return 100;

    return DDDD;
}
void solve()
{
    int x, y, R; cin >> x >> y >> R;

    for (int i = -50; i <= 50; i++)
    {
        for (int j = -50; j <= 50; j++)
        {
            if(dis(x, i, y, j) == R)
            {
                cout << i << " " << j << nl; return;
            }
        }
    }
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