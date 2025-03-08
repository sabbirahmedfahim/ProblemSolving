#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int n, m;
const int N = 25;
char mat[N][N];
int vis[N][N];
vector<pair<int, int> > directionArr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool isValid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}
int cnt;
void dfs(int si, int sj)
{
    cnt++;
    // cout << si << ' ' << sj << nl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + directionArr[i].first;
        int cj = sj + directionArr[i].second;
        if(isValid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}
int cs = 1;
void solve()
{
    cout << "Case " << cs++ << ": ";

    cin >> m >> n;
    
    cnt = 0;
    int si, sj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == '@') 
            {
                si = i, sj = j;
            }
        }
    }

    // cout << si << ' ' << sj << nl;

    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    cout << cnt << nl;
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