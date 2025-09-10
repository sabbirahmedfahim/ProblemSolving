#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
red + blue = blue
*/
void solve()
{
    int n, a, b; cin >> n >> a >> b;

    if(n & 1)
    {
        if(a < b && (b & 1)) cout << "YES" << nl;
        else if(b % 2 == 0 || a % 2 == 0) cout << "NO" << nl;
        else cout << "YES" << nl;
    }
    else
    {
        if((a & 1) && a > b) cout << "NO" << nl;
        else if((b & 1)) cout << "NO" << nl; 
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