#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
char mat[N][N]; // adjust data type ***
int n, m;
bool vis[N][N];
bool visForMe[N][N];
int dist[N][N];
int distForMe[N][N];
pair<int, int> parent[N][N];
vector<pair<int, int> > d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool is_valid(int ci, int cj)
{
    return (ci < n && ci >= 0 && cj < m && cj >= 0);
}
vector<pair<int, int>> allMonsters;
void bfs(int si, int sj) // si, sj is useless here
{
    queue<pair<int, int>> q;
    for (int i = 0; i < allMonsters.size(); i++)
    {
        q.push({allMonsters[i].first, allMonsters[i].second});
        vis[allMonsters[i].first][allMonsters[i].second] = true;
        dist[allMonsters[i].first][allMonsters[i].second] = 0;
    }
    
    // q.push({si, sj});
    // vis[si][sj] = true;
    // dist[si][sj] = 0;

    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            // careful with mixed-type comparisons (e.g., char vs int)
            if(is_valid(ci, cj) && !vis[ci][cj] && (mat[ci][cj] == '.' || mat[ci][cj] == 'A')) 
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dist[ci][cj] = dist[par.first][par.second] + 1;
            }
        }
    }
}
void bfsForMe(int si, int sj) 
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visForMe[si][sj] = true;
    distForMe[si][sj] = 0;
    parent[si][sj] = {-1, -1};
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            // careful with mixed-type comparisons (e.g., char vs int)
            if(is_valid(ci, cj) && !visForMe[ci][cj] && mat[ci][cj] == '.') 
            {
                q.push({ci, cj});
                visForMe[ci][cj] = true;
                distForMe[ci][cj] = distForMe[par.first][par.second] + 1;
                parent[ci][cj] = par;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    cin >> n >> m;

    int x, y;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = s[j];
            if(mat[i][j] == 'M') allMonsters.push_back({i, j});
            if(mat[i][j] == 'A') 
            {
                x = i; y = j;
            }
            // cerr << mat[i][j];
        }
        // cerr << nl;
    }

    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));
    memset(visForMe, false, sizeof(visForMe));
    memset(distForMe, -1, sizeof(distForMe));

    bfs(1, 1);
    bfsForMe(x, y);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool ok = false;
            int di, dj;
            if((i == 0 || j == 0 || i == n - 1 || j == m - 1) && visForMe[i][j])
            {
                if(dist[i][j] == -1 || dist[i][j] > distForMe[i][j]) 
                {
                    di = i, dj = j; ok = true;
                }
            }

            if(ok)
            {
                /* PATH */
                vector<pair<int, int>> path;
                pair<int, int> curr = {di, dj}; // d -> destination
                while (!(curr.first == -1 && curr.second == -1))
                {
                    path.push_back(curr);
                    curr = parent[curr.first][curr.second];
                }

                reverse(all(path));

                cout << "YES" << nl;
                cout << path.size() - 1 << nl;
                for (int i = 1; i < path.size(); i++)
                {
                    // cerr << path[i].first << ", " << path[i].second << nl;
                    if(path[i - 1].first + 1 == path[i].first && path[i - 1].second == path[i].second) cout << "D"; // 1, 0
                    if(path[i - 1].first - 1 == path[i].first && path[i - 1].second == path[i].second) cout << "U"; // -1, 0
                    if(path[i - 1].first == path[i].first && path[i - 1].second + 1 == path[i].second) cout << "R"; // 0, 1
                    if(path[i - 1].first == path[i].first && path[i - 1].second - 1 == path[i].second) cout << "L"; // 0, -1
                }
                cout << nl;

                return 0;
            }
        }
    }

    cout << "NO" << nl;
 
    return 0;
}