#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int n; 
bool isValid(int i, int j)
{
    return (i < n && j < n && i >= 0 && j >= 0);
}
void solve()
{
    cin >> n;
    int mat[n][n];

    int curr = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = curr++;
            // cerr << mat[i][j] << " ";
        }
        // cerr << nl;
    }
    
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            sum += mat[i][j];
            if(isValid(i, j - 1)) sum += mat[i][j - 1];
            if(isValid(i - 1, j)) sum += mat[i - 1][j];
            if(isValid(i, j + 1)) sum += mat[i][j + 1];
            if(isValid(i + 1, j)) sum += mat[i + 1][j];

            mx = max(mx, sum);
        }
    }

    cout << mx << nl;
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