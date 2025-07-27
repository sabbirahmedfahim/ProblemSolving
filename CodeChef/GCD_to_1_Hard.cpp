#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
void solve()
{
    int row, col; cin >> row >> col;
    int mat[row][col];
    
    for (int i = 0; i < row; i++)
    {
        int cnt = 0;
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = 2;
            if(i == j) mat[i][j] = 3, cnt++;
        }
        if(cnt == 0) mat[i][0] = 3;
    }

    for (int i = 0; i < col; i++)
    {
        int cnt = 0;
        for (int j = 0; j < row; j++)
        {
            if(mat[j][i] == 3) cnt++;
        }
        if(cnt == 0) mat[0][i] = 3;
    }
    
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << nl;
    }
}
int main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << i << nl;
        solve();
    }
    

}