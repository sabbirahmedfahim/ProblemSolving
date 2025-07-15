// resolved - i misread, they said -- "exactly k operations". no more, no less!! [easy easy]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
int n, k;
int mat[N][N];
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if(i > n - i + 1 || (i == n - i + 1 && j > n - j + 1)) break;
            if(i > (n - i + 1) || (i == n - i + 1 && j > n - j + 1)) continue;
            if(mat[i][j] != mat[n - i + 1][n - j + 1]) cnt++;
        }
    }

    if(k < cnt)
    {
        cout << "NO" << nl; return;
    }
 
    if(n & 1) cout << "YES" << nl; // here's another trick, if n is odd, then we can cng the middle row to fix k
    else if((k - cnt) & 1) cout << "NO" << nl;
    else cout << "YES" << nl;
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