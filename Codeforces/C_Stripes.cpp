#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n = 8;
    char mat[8][8]; int mxR = 0;
    for (int i = 0; i < n; i++)
    {
        int r = 0;
        for (int j = 0; j < 8; j++)
        {
            cin >> mat[i][j]; if(mat[i][j] == 'R') r++;
        }
        mxR = max(mxR, r);
    }
    cout << ((mxR == 8)? "R" : "B" ) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}