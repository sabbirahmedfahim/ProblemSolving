#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
Strategy:
There is a pattern in this problem. We walk through 4 diagonals to find the answer.
The directions are -> (1,1), (-1,1), (-1,-1), (1,-1).
Look at the given illustration to understand the pattern.
To detect the directions, you should draw (0, 0) x, y axis
*/
const int N = 205;
int mat[N][N];
bool vis[N][N];
int n, m;
vector<pair<int, int>> d = {{1,1}, {-1, 1}, {-1, -1}, {1, -1}};
int cur_ci, cur_cj;
bool is_valid(int ci, int cj)
{
    return !(ci >= n || ci < 0 || cj >= m || cj < 0);
}
int ans = 0, mx;
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    int ci = si + cur_ci;
    int cj = sj + cur_cj;
    if (is_valid(ci, cj) && !vis[ci][cj])
        {
            mx += mat[ci][cj]; ans = max(mx, ans);
            dfs(ci, cj);
        }
}
void solve()
{
    cin >> n >> m;
    int ektaMx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if(ektaMx < mat[i][j]) ektaMx = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mx = 0;
            mx += mat[i][j];
            
            for (int k = 0; k < 4; k++)
            {
                memset(vis, false, sizeof(vis));
                cur_ci = d[k].first, cur_cj = d[k].second;
                dfs(i, j);
            }
        }
    }
    cout << max(ans, ektaMx) << nl;
    ans = 0;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}