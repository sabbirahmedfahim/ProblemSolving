// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int row, col; cin >> row >> col;
    string s; cin >> s;

    ll grid[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }
    
    int cur_row = 0, cur_col = 0;
    for(auto e : s)
    {
        if(e == 'D')
        {
            ll sum = 0;
            for (int i = 0; i < col; i++)
            {
                sum += grid[cur_row][i];
            }
            grid[cur_row][cur_col] = -sum;
            cur_row++;
        }
        if(e == 'R')
        {
            ll sum = 0;
            for (int i = 0; i < row; i++)
            {
                sum += grid[i][cur_col];
            }
            grid[cur_row][cur_col] = -sum;
            cur_col++;
        }
    }

    // last row, col
    ll sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += grid[i][col-1];
    }
    grid[row-1][col-1] = - sum;
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << grid[i][j] << ' ';
        }
        cout << nl;
    }
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