#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int row, col; cin >> row >> col;
    int mat[row][col];
    for (int i = 0; i < row; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            mat[i][j] = s[j] - '0';
        }
    }
    
    vector<int> dekhiRow;
    for (int i = 0; i < row; i++)
    {
        int rowWiseXor = 0;
        for (int j = 0; j < col; j++)
        {
            // cout << mat[i][j] << " ";
            rowWiseXor ^= mat[i][j];
        }
        dekhiRow.push_back(rowWiseXor);
        // cout << nl;
    }
    // cout << nl;

    // print(dekhiRow);
    // sort(all(dekhiRow)); reverse(all(dekhiRow));
    // cout << dekhiRow.front() << nl;
    int sum1 = accumulate(all(dekhiRow), 0);
    // cout << sum1 << nl;


    vector<int> dekhiCol;
    for (int i = 0; i < col; i++)
    {
        int colWiseXor = 0;
        for (int j = 0; j < row; j++)
        {
            colWiseXor ^= mat[j][i];
        }
        dekhiCol.push_back(colWiseXor);
    }
    int sum2 = accumulate(all(dekhiCol), 0);

    cout << max(sum1, sum2) << nl;
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