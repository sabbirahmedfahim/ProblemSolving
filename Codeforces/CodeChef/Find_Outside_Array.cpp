// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<int> a(n); for(auto &e : a) cin >> e;

    set<int> st;
    for(auto e : a) st.insert(e);

    if(!st.count(0)) cout << a[0] << " " << a[0] << nl;
    else 
    {
        sort(all(a)); reverse(all(a));

        if(st.count(a[0]+a[0])) cout << -1 << nl;
        else cout << a[0] << " " << a[0] << nl;
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