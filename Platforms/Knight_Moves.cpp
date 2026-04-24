#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int n, m, si, sj, di, dj;
vector<pair<int, int> > d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
const int N = 1e3+5;
bool vis[N][N];
int dis[N][N];
bool is_valid(int ci, int cj)
{
    return !(ci < 0 || ci >= n || cj < 0 || cj >= m);
}
void bfs(int si, int sj)
{
    queue<pair<int, int> > q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if(is_valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second] + 1;
            }
        }
    }
    
}
void solve()
{
    cin >> n >> m >> si >> sj >> di >> dj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << ((vis[di][dj])? dis[di][dj] : -1) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}