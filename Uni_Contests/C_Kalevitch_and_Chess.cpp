#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    char mat[8][8];

    int B = 0, tmp, row = 0, col = 0;
    for (int i = 0; i < 8; i++)
    {
        string s; cin >> s;
        tmp = 0;
        for (int j = 0; j < 8; j++)
        {
            mat[i][j] = s[j];
            if(mat[i][j] == 'B') B++, tmp++;
        }
        if(tmp == 8)    row++;
    }

    if(B == 64)
    {
        cout << 8 << nl; return;
    }



    for (int i = 0; i < 8; i++)
    {
        tmp = 0;
        for (int j = 0; j < 8; j++)
        {
            if(mat[j][i] == 'B')  tmp++;
        }
        if(tmp == 8)    col++;
    }
    
    // cout << row << " " << col << nl;
    cout << row + col << nl;

    
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cout << mat[i][j];
    //     }
    //     cout << nl;
    // }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}