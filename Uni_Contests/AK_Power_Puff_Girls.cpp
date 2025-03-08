#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 25;
bool vis[N][N];
char grid[N][N];
int dis[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool is_valid(int ci, int cj)
{
    if (ci >= n || ci < 0 || cj >= m || cj < 0)
        return false;
    return true;
}
int cnt;
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        // cout << par.first << ' ' << par.second << nl;
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first; 
            int cj = par.second + d[i].second; 

            if (is_valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] != '#' && grid[ci][cj] != 'm'))
            {
                cnt++;
                dis[ci][cj] = dis[par.first][par.second] + 1;
                if(grid[ci][cj] == 'h')
                {
                    return;
                }
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}
int cs = 1;
void solve()
{
    cout << "Case " << cs++ << ": ";

    cin >> n >> m;

    int sAi, sAj, sBi, sBj, sCi, sCj, di, dj;
    map<char, pair<int, int> > mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'a')
            {
                sAi = i, sAj = j;
            }
            if(grid[i][j] == 'b')
            {
                sBi = i, sBj = j;
            }
            if(grid[i][j] == 'c')
            {
                sCi = i, sCj = j;
            }
            if(grid[i][j] == 'h')
            {
                di = i, dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    // solution always exist
    vector<int> res;
    bfs(sAi, sAj);
    res.push_back(dis[di][dj]);
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    bfs(sBi, sBj);
    res.push_back(dis[di][dj]);
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    bfs(sCi, sCj);
    res.push_back(dis[di][dj]);

    sort(all(res));
    cout << res.back() << nl;
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