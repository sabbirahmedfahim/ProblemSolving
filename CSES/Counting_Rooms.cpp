#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int n, m;
const int N = 1E4+5;
bool vis[N][N];
char mat[N][N];
vector<pair<int, int> > directionArr = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
bool isValid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}
void dfs(int si, int sj)
{
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
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m; int cnt = 0;

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
            if(!vis[i][j] && mat[i][j] == '.')
            {
                cnt++; dfs(i, j);
            }
        }
    }
    cout << cnt << nl;

    return 0;
}