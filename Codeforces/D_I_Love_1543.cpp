#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    char mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int row = n, col = m;
    for (int i = 0; i < row/2; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j];  
            if(i == col-1)
            {
                while (j != col-1)
                {
                    cout << mat[i][j]; j++;
                }
            }
        }
        cout << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}