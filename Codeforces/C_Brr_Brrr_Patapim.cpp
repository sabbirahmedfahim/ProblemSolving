#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int mat[n + 1][n + 1];
    vector<int> res(n * 2 + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
            if(i + j <= n * 2 && res[i + j] == 0)
            {
                res[i + j] = mat[i][j];
            }
        }
    }

    int m = n * 2;
    res[1] = (m*(m+1)/2) - accumulate(all(res), 0ll);

    for (int i = 1; i <= n * 2; i++)
    {
        cout << res[i] << " ";
    }
    cout << nl;
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