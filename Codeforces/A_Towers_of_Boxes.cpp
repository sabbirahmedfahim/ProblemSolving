#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, d; cin >> n >> m >> d;


    int mxOfEachTower = 1;
    for (int i = 1; ; i++)
    {
        if((i * m) > d) break;

        mxOfEachTower = i + 1;
    }
    
    // cerr << mxOfEachTower << nl;
    cout << (n / mxOfEachTower) + (n % mxOfEachTower != 0) << nl;
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