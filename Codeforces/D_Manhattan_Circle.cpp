#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;

    int targetCol = -1, tempR = 1e9;
    int targetRow;
    vector<vector<char> > mat(n+5, vector<char> (m+5));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == '#' && targetCol == -1) targetCol = j;
            if(mat[i][j] == '#' && tempR > j) 
            {
                targetRow = i; tempR = j;
            }
        }
    }
    // cout << targetCol << " " << tempC << nl;
    
    cout << targetRow << " " << targetCol << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}