// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int e; cin >> e;
    set<string> justFrnt;
    vector<pair<string, string>> res;
    while (e--)
    {
        string a, b; cin >> a >> b;
        if(justFrnt.count(b)) 
        {
            cout << "No" << nl; return;
        }
        res.push_back({a, b});
        justFrnt.insert(a);
    }
    
    cout << "Yes" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        cout << "Case " << tt << ": ";
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}