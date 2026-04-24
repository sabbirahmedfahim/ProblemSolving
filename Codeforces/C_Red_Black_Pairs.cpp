#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    char mat[2][n];
    bool vis[2][n];
    for (int i = 0; i < 2; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            mat[i][j] = s[j];
            vis[i][j] = false;
        }
    }

    int notOK = 0;
    for (int j = 0; j < n; j++)
    {
        if(vis[0][j] == false && vis[1][j] == false && mat[0][j] == mat[1][j])
        {
            vis[0][j] = true; vis[1][j] = true;
        }
    }
    for (int j = 0; j < n - 1; j++)
    {
        if(vis[0][j] == false && vis[0][j + 1] == false && mat[0][j] == mat[0][j + 1])
        {
            vis[0][j] = true; vis[0][j + 1] = true;
            vis[1][j] = true; vis[1][j + 1] = true;

            if(mat[1][j] != mat[1][j + 1]) notOK++;
        }
        else if(vis[0][j] == false && vis[0][j + 1] == false && mat[1][j] == mat[1][j + 1])
        {
            notOK++;
            
            vis[0][j] = true; vis[0][j + 1] = true;
            vis[1][j] = true; vis[1][j + 1] = true;
        }
    }
    
    for (int j = 0; j < n; j++)
    {
        if(vis[0][j] != vis[1][j])
        {
            while(1)
            {
                ; // dbg...
            }
        }

        if(vis[0][j] == false && vis[1][j] == false)
        {
            if(mat[0][j] != mat[1][j]) notOK++;
        }
    }
    
    
    cout << notOK << nl; 

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mat[i][j];
    //     }
    //     cout << nl;
    // }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}