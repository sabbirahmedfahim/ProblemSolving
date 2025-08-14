#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
int mat[N][N]; // change data type ***
bool vis[N][N];
int n, m;
int si, sj, di, dj;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool is_valid(int ci, int cj)
{
    return (ci < n && ci >= 0 && cj < m && cj >= 0);
}
int mxVol = 0, vol;
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    vol += mat[si][sj];
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;  
        int cj = sj + d[i].second; 
 
        if (is_valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] != 0) // change data type ***
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
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] != 0 && !vis[i][j])
            {
                vol = 0;
                dfs(i, j);
                mxVol = max(mxVol, vol);
            }
        }
    }
 
    cout << mxVol << endl;
    mxVol = 0;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}