#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    int mat[n + 1][m + 1];

    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mat[i][j];
            mx = max(mx, mat[i][j]);
        }
    }
    
    int tot_mx = 0;
    map<int, int> row, col;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(mat[i][j] == mx)
            {
                row[i]++;
                col[j]++;

                tot_mx++;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int add = 0;
            if(mat[i][j] == mx) add = -1;
            if(row[i] + col[j] + add == tot_mx)
            {
                cout << mx - 1 << nl; return;
            }
        }
    }
    cout << mx << nl; return;
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