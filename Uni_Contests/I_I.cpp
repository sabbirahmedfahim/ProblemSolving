#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int n, m;
const int N = 1E3 + 5;
int mat[N][N];
vector<pair<int, int>> directionArr = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool vis[N][N];
ll sum;
bool is_valid(int ci, int cj)
{
    return (ci < n && ci >= 0 && cj < m && cj >= 0);
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    sum += mat[si][sj];
    for (int i = 0; i < 4; i++)
    {
        int ci = si + directionArr[i].first;
        int cj = sj + directionArr[i].second;
        if(is_valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] != 0)
        {
            dfs(ci, cj);
        }
    }
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    memset(vis, false, sizeof(vis));

    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && mat[i][j] != 0)
            {
                sum = 0;
                dfs(i, j);
            }
            mx = max(mx, sum);
        }
    }

    cout << mx << nl;
    sum = 0;
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