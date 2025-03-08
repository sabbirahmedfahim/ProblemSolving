// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    map<int, int> mp;
    for(auto e : v) mp[e]++;
    int uniqueEle = 0, moreThanOne = 0;
    for(auto [key, val] : mp)
    {
        if(val == 1) uniqueEle++;
        else moreThanOne++;
    }
    
    cout << moreThanOne + ((uniqueEle+1)/2 * 2) << nl; // don't understand 
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