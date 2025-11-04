#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int n;
char mat[105][105];
bool ok(int row, int col)
{
    bool ok1 = true, ok2 = true;
    if(row - 1 >= 0 && col + 1 < n)
    {
        if(mat[row][col + 1] == '#' && mat[row - 1][col + 1] == '#') ok1 = false;
    }
    if(row + 1 < n && col - 1 >= 0)
    {
        if(mat[row + 1][col] == '#' && mat[row + 1][col - 1] == '#') ok2 = false;
    }

    return (ok1 && ok2);
}
// bool arektaOK1(int row, int col)
// {
//     if(col + 1 < n && mat[row][col + 1] == '#') return false;
//     return true;
// }
// bool arektaOK2(int row, int col)
// {
//     if(row + 1 < n && mat[row + 1][col] == '#') return false;
//     return true;
// }
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            mat[i][j] = s[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j] == '#')
            {
                if(i + 1 < n && j + 1 < n && ok(i, j)) mat[i + 1][j + 1] = '#';
                else if(i + 1 < n && j + 1 < n && mat[i + 1][j + 1] == '#')
                {
                    cout << "NO" << nl; return;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j] == '#' && i + 2 < n && mat[i + 2][j] == '#')
            {
                cout << "NO" << nl; return;
            }
            if(mat[i][j] == '#' && j + 2 < n && mat[i][j + 2] == '#')
            {
                cout << "NO" << nl; return;
            }
        }
    }

    cout << "YES" << nl;
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cerr << mat[i][j];
    //     }
    //     cerr << nl;
    // }
    // cerr << nl;
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