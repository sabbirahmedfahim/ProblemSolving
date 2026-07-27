#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x, p; cin >> n >> x >> p;
    // p = min(p, n);

    int mnDis = n - x;

    for (int i = 1; i <= min(p, 10000ll); i++)
    {
        int sum = (i * (i + 1ll)) / 2;
        if((sum - mnDis) % n == 0)
        {
            cout << "Yes" << nl; return;
        }
    }
    cout << "No" << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
/*
1 -> 1
2 -> 3
3 -> 6
4 -> 0
5 -> 5
7 -> 8

0 1 3 5 6 8 
*/