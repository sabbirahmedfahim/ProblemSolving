#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    string x, y; cin >> x >> y; // y appear in x as a substring

    int op = 0;
    while (x.size() <= 50)
    {
        for (int i = 0; i < x.size(); i++)
        {
            if(x.size() < y.size()) break;
            
            if(i+m-1 < x.size() && x.substr(i, m) == y)
            {
                cout << op << nl; return;
            }
        }
        x += x;
        op++;
    }
    cout << -1 << nl;
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