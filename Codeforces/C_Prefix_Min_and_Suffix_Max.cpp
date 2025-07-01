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

    multiset<int> ml;
    for(auto e : a)
    {
        ml.insert(e);
    }

    set<int> st;
    int mn = 1E9, mx;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, a[i]);
        mx = *--ml.end();
        st.insert(mn);
        st.insert(mx);

        ml.erase(a[i]);
    }
    // print(st);
    

    string s; 
    for (int i = 0; i < n; i++)
    {
        if(st.count(a[i])) s += '1';
        else s += '0';
    }

    cout << s << nl;
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