#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1e4+5;
char mat[N][N];
int n, m;
bool vis[N][N];
int dis[N][N];
vector<pair<int, int> > d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool is_valid(int ci, int cj)
{
    return !(ci < 0 || ci >= n || cj < 0 || cj >= m);
}
void bfs(int si, int sj)
{
    queue<pair<int, int> > q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if(is_valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == '.' && !vis[i][j])
            {
                cnt++; bfs(i, j);
            }
        }
    }
    cout << cnt << nl;

    return 0;
}