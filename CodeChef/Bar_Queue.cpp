#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    
    int res = 0;
    int g = 0, b = 0;
    for(auto e : s)
    {
        if(e == 'G') g++;
        else b++;

        res++;

        if(b > 2 * g) 
        {
            cout << res << nl; return;
        }
    }
    cout << res << nl;
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