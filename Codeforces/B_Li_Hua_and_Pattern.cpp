// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
. . . . .
. . . . .
. . . . .
. . . . .
. . . . .
*/
const int N = 1E3 + 5;
int mat[N][N];
void solve()
{
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    int mismatch = 0;
    for (int i = 0, ni = n - 1; i <= ni; i++, ni--) // rows
    {
        for (int j = 0, nj = n - 1; j < n; j++, nj--) // cols
        {
            // if(i == ni && j == nj) continue; // it will not count
            if(i == ni && j > nj) continue; // because i do not wanna count this two times
            if(mat[i][j] != mat[ni][nj]) mismatch++;
        }
    }

    cerr << mismatch << nl;

    if(k < mismatch) cout << "NO" << nl;
    else 
    {
        k -= mismatch;
        if(n & 1) cout << "YES" << nl;
        else if(k & 1) cout << "NO" << nl;
        else cout << "YES" << nl;
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