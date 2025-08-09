#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
char mat[N][N]; // change data type ***
bool vis[N][N];
int n, m, k;
int si, sj, di, dj;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool is_valid(int ci, int cj)
{
    return (ci < n && ci >= 0 && cj < m && cj >= 0);
}
int need;
void dfs(int si, int sj)
{
    if(need == 0) return;

    vis[si][sj] = true;
    need--;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;  
        int cj = sj + d[i].second; 
 
        if (is_valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '.') // change data type ***
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m >> k;
    int emptyCells = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j]; 
            if(mat[i][j] == '.') emptyCells++;
        }
    }
    need = emptyCells - k;

    memset(vis, false, sizeof(vis));
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                i = n;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && mat[i][j] == '.')
            {
                mat[i][j] = 'X';
            }
            cout << mat[i][j];
        }
        cout << nl;
    }
 
    return 0;
}