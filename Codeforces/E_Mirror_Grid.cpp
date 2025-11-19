#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int mat1[n][n], mat2[n][n], mat3[n][n], mat4[n][n];
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < n; j++)
        {
            mat1[i][j] = '1' - s[j];
            // cerr << mat1[i][j] << " ";
        }
        // cerr << nl;
    }
    
    // mat2
    for (int i = 0, currCol = 0; i < n; i++, currCol++)
    {
        for (int j = 0, currRow = n - 1; j < n; j++, currRow--)
        {
            mat2[i][j] = mat1[currRow][currCol];
            // cout << mat2[i][j] << " ";
        }
        // cout << nl;
    }
    
    // mat3
    for (int i = 0, currCol = 0; i < n; i++, currCol++)
    {
        for (int j = 0, currRow = n - 1; j < n; j++, currRow--)
        {
            mat3[i][j] = mat2[currRow][currCol];
            // cout << mat2[i][j] << " ";
        }
        // cout << nl;
    }

    // mat4
    for (int i = 0, currCol = 0; i < n; i++, currCol++)
    {
        for (int j = 0, currRow = n - 1; j < n; j++, currRow--)
        {
            mat4[i][j] = mat3[currRow][currCol];
            // cout << mat2[i][j] << " ";
        }
        // cout << nl;
    }

    int cost = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat1[i][j] += mat2[i][j] + mat3[i][j] + mat4[i][j];
            // cerr << mat1[i][j] << " ";
            if(mat1[i][j] == 0 || mat1[i][j] == 4) continue;
            if(mat1[i][j] == 2) mp[2]++;
            if(mat1[i][j] == 1 || mat1[i][j] == 3) mp[1]++;
        }
        // cerr << nl;
    }
    
    for(auto [x, y] : mp)
    {
        if(x == 1) cost += y / 4;
        else cost += y / 2;
        // cout << x << " : " << y << nl;
    }
    cout << cost << nl;
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