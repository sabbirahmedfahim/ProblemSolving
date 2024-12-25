#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 55;
int n, m;
char mat[N][N];
// bool vis[N][N];
bool is_valid(int ci, int cj)
{
    return !(ci < 0 || ci >= n || cj < 0 || cj >= m);
}
void dfs(int si, int sj)
{
    // vis[si][sj] = true;
    int ci = si + 1;
    int cj = sj;
    if(is_valid(ci, cj) && (mat[ci][cj] == '.'))
    {
        mat[si][sj] = '.';
        mat[ci][cj] = '*';
        dfs(ci, cj);
    }
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    // memset(vis, false, sizeof(vis));
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == '*') dfs(i, j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << nl;
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}