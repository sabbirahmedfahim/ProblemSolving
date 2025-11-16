#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    int mat[n][m];

    vector<int> bits(31);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            // cout << mat[i][j] << " ";
        }
        // cout << nl;
    }
    
    vector<int> rows, cols;
    for (int i = 0; i < n; i++)
    {
        int data = 0;
        for (int j = 0; j < m; j++)
        {
            data ^= mat[i][j];
        }
        rows.push_back(data);
    }
    for (int i = 0; i < m; i++)
    {
        int data = 0;
        for (int j = 0; j < n; j++)
        {
            data ^= mat[j][i];
            // cout << mat[j][i] << " ";
        }
        cols.push_back(data);
        // cout << nl;
    }

    for (int i = 0; i < rows.size(); i++)
    {
        for (int j = 0; j < cols.size(); j++)
        {
            cout << (rows[i] & cols[j]) << " ";
        }
        
    }
    return;
    
    

    cout << "rows : ";
    print(rows);
    cout << "cols : ";
    print(cols);

    int sum = 0;
    for(auto e : rows) sum += e;
    for(auto e : cols) sum += e;
    cout << "sum : " << sum << nl;
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