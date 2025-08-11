#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
char mat[N][N]; // change data type ***
bool vis[N][N];
int n, m;
int si, sj, di, dj;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool is_valid(int ci, int cj)
{
    return (ci < n && ci >= 0 && cj < m && cj >= 0);
}
int curr_goodPpl;
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if(mat[si][sj] == 'G') curr_goodPpl++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;  
        int cj = sj + d[i].second; 
 
        if (is_valid(ci, cj) && !vis[ci][cj] && (mat[ci][cj] == 'G' || mat[ci][cj] == '.')) // change data type ***
        {
            dfs(ci, cj);
        }
    }
}
void solve()
{
    curr_goodPpl = 0; // reset

    cin >> n >> m;
    int goodPpl = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j]; 
            if(mat[i][j] == 'G') 
            {
                goodPpl++; si = i, sj = j;
            }
        }
    }

    if(goodPpl == 0)
    {
        cout << "Yes" << nl; return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] != 'B') continue;
            for (int k = 0; k < 4; k++)
            {
                int ci = i + d[k].first, cj = j + d[k].second;
                if(is_valid(ci, cj))
                {
                    if(mat[ci][cj] == 'G')
                    {
                        cout << "No" << nl; return;
                    }
                    if(mat[ci][cj] == '.')
                    {
                        mat[ci][cj] = '#';
                    }
                }
            }
        }
    }

    memset(vis, false, sizeof(vis));
 
    dfs(si, sj);
 
    if(vis[n - 1][m - 1] && goodPpl == curr_goodPpl) cout << "Yes" << nl;
    else cout << "No" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
 
    return 0;
}