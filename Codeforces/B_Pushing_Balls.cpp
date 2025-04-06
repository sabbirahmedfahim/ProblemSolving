#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 55;
char mat[N][N];
int vis[N][N];
void solve()
{
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string x; cin >> x;
        for (int j = 0; j < x.size(); j++)
        {
            mat[i][j] = x[j];
        }
    }

    memset(vis, -1, sizeof(vis));
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m-1; col++)
        {
            if(mat[row][col] == '0' && mat[row][col+1] == '1')
            {
                if(vis[row][col] == -1) vis[row][col] = -5;
            }
        }
    }
    for (int col = 0; col < m; col++)
    {
        for (int row = 0; row < n-1; row++)
        {
            // cout << mat[row][col] << ' ';
            if(mat[row][col] == '0' && mat[row+1][col] == '1')
            {
                if(vis[row][col] == -1) vis[row][col] = -5;
            }
        }
        // cout << nl;
    }

    /*##########################################################*/

    // code here
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m-1; col++)
        {
            if(mat[row][col] == '0' && mat[row][col+1] == '1')
            {
                if(vis[row][col] == -1) vis[row][col] = -5;
            }
        }
    }
    for (int col = 0; col < m; col++)
    {
        for (int row = 0; row < n-1; row++)
        {
            // cout << mat[row][col] << ' ';
            if(mat[row][col] == '0' && mat[row+1][col] == '1')
            {
                if(vis[row][col] == -1) vis[row][col] = -5;
            }
        }
        // cout << nl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << mat[i][j] << ' ';
            cout << vis[i][j] << ' ';
        }
        cout << nl;
    }
    cout << nl;
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