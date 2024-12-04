#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
const int N = 1e4 + 5;
char mat[N][N];
bool vis[N][N];
int n, m;
vector<pair<int,int> > d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool isValid(int ci, int cj)
{
    return !(ci >= n || ci < 0 || cj >=m || cj < 0);
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(isValid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    iOS

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == '.' && !vis[i][j])
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << nl;
    

    return 0;
}