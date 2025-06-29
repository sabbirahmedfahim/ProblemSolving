// took hints from TLE, really an easy & tricky problem. Not even enough tricky
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

    bool haveZero = false;
    int cntMinus = 0;
    int sum = 0, mn = 200;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];

            if(mat[i][j] < 0) cntMinus++;
            sum += abs(mat[i][j]);
            if(mat[i][j] == 0) haveZero = true;
            mn = min(mn, abs(mat[i][j]));
        }
    }
    
    if(haveZero) cout << sum << nl;
    else if(cntMinus & 1) cout << sum - (mn * 2) << nl;
    else cout << sum << nl;
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