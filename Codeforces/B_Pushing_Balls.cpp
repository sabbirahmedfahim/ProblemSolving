#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 55;
vector<vector<char>> mat(N, vector<char>(N));
vector<vector<bool>> vis(N, vector<bool>(N));
void solve()
{
    int row, col; cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        string x; cin >> x;
        for (int j = 0; j < x.size(); j++)
        {
            mat[i][j] = x[j];

            vis[i][j] = false; // reset vis after every tc
        }
    }
    
    // column fixed
    for (int i = 0; i < row; i++)
    {
        if(mat[i][0] == '1')
        {
            int j = 0; // column
            while (j < col && mat[i][j] == '1')
            {
                vis[i][j] = true;
                j++;
            }
        }
    }
    
    // row fixed
    for (int i = 0; i < col; i++)
    {
        if(mat[0][i] == '1')
        {
            int j = 0; // row
            while (j < row && mat[j][i] == '1')
            {
                vis[j][i] = true;
                j++;
            }
        }
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(mat[i][j] == '1' && !vis[i][j])
            {
                cout << "NO" << nl; return;
            }
        }
    }

    cout << "YES" << nl;

    // mat.clear(); // got runtime error for the line, i.e it's inaccurate
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