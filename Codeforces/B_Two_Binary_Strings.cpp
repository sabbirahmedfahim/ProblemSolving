#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string x, y; cin >> x >> y;
    
    for (int i = 0; i < x.size()-1; i++)
    {
        if(x[i] == '0' && y[i] == '0' && x[i + 1] == '1' && y[i + 1] == '1')
        {
            cout << "YES" << nl; return;
        }
    }
    
    cout << "NO" << nl; return;
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