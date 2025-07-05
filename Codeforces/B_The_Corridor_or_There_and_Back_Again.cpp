#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    int mxK = 1E9;
    while (n--)
    {
        int d, s; cin >> d >> s; 

        int maybe = d - 1 + (s/2);
        if(s & 1) maybe++;

        mxK = min(mxK, maybe);
    }
    
    cout << mxK << nl;
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