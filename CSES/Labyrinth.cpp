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
// int dist[N][N];
pair<int, int> parent[N][N];
vector<pair<int, int> > d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool is_valid(int ci, int cj)
{
    return (ci < n && ci >= 0 && cj < m && cj >= 0);
}
void bfs(int si, int sj) 
{
    queue<pair<int, int> > q;
    q.push({si, sj});
    vis[si][sj] = true;
    // dist[si][sj] = 0;
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
            if(is_valid(ci, cj) && !vis[ci][cj] && (mat[ci][cj] == '.' || mat[ci][cj] == 'B')) 
            {
                parent[ci][cj] = par;
                vis[ci][cj] = true;
                if(mat[ci][cj] == 'B') return;

                q.push({ci, cj});
                // dist[ci][cj] = dist[par.first][par.second] + 1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    cin >> n >> m;


    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 'A') si = i, sj = j;
            if(mat[i][j] == 'B') di = i, dj = j;
        }
    }

    memset(vis, false, sizeof(vis));
    // memset(dist, -1, sizeof(dist));

    bfs(si, sj);

    if(!vis[di][dj])
    {
        cout << "NO" << nl; return 0;
    }

    vector<pair<int, int>> path;
    pair<int, int> curr = {di, dj};
    while (!(curr.first == -1 && curr.second == -1))
    {
        path.push_back(curr);
        curr = parent[curr.first][curr.second];
    }
    
    // for(auto [x, y] : path) 
    // {
    //     cerr << x << " " << y << nl;
    // }

    vector<char> res;
    for (int i = 1; i < path.size(); i++)
    {
        auto [x1, y1] = path[i -1];
        auto [x2, y2] = path[i];

        if(x1 == x2)
        {
            if(y1 < y2) res.push_back('L');
            else res.push_back('R');
        }
        else
        {
            if(x1 < x2) res.push_back('U');
            else res.push_back('D');
        }
    }
    
    reverse(all(res));
    cout << "YES" << nl;
    cout << res.size() << nl;
    for(auto e : res) cout << e;
    cout << nl;
 
    return 0;
}