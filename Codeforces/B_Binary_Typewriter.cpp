// Resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll calcCost(string x)
{
    ll cost = 1;
    if(x[0] == '1') cost++;
    for (int i = 1; i < x.size(); i++)
    {
        if(x[i] != x[i - 1]) cost += 2;
        else cost++;
    }
    return cost;
}
void solve()
{
    int n; string s; cin >> n >> s;
    int block = 0;
    for (int i = 1; i < n; i++)
    {
        if(s[i - 1] != s[i])
        {
            block++;
        }
    }

    if(block == 0)
    {
        cout << calcCost(s) << nl; return;
    }

    if(s[0] == '0')
    {
        if(block == 1) cout << calcCost(s) << nl;
        else if(block == 2) cout << calcCost(s) - 1 << nl;
        else cout << calcCost(s) - 2 << nl;
    }
    else 
    {
        if(block == 1) cout << calcCost(s) - 1 << nl;
        else cout << calcCost(s) - 2 << nl;
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