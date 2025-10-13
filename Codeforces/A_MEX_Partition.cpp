#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));
    set<int> st;
    for(auto e : a) st.insert(e);

    for (int i = 0; i <= 105; i++)
    {
        if(!st.count(i))
        {
            cout << i << nl; return;
        }
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