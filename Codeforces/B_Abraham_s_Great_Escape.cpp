#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    if((n * n) - k == 1) {
        cout << "NO" << nl; return;
    }

    char mat[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) mat[i][j] = 'X';
    }
    for (int i = 0; i < n; i++){ // can escape
        for (int j = 0; j < n && k; j++){
            k--;
            mat[i][j] = 'U';
        }
    }

    for (int i = 0; i < n; i++){ // make a loop, a boundary so that no one can escape
        for (int j = 0; j < n - 1; j++) {
            if(mat[i][j] == 'X') mat[i][j] = 'R';
        }
    }
    for (int i = 0; i < n - 1; i++){ // make a loop, a boundary so that no one can escape
        for (int j = n - 1; j < n; j++) {
            if(mat[i][j] == 'X') mat[i][j] = 'D';
        }
    }

    if(mat[n - 2][n - 1] != 'X') mat[n - 1][n - 1] = 'U'; // make a loop, a boundary so that no one can escape
    if(mat[n - 1][n - 2] != 'X') mat[n - 1][n - 1] = 'L'; // make a loop, a boundary so that no one can escape

    cout << "YES" << nl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ 
            cout << mat[i][j];
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