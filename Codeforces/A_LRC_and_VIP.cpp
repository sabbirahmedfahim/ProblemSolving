#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n);
    for(auto &e : a) cin >> e;
    // sort(all(a)); reverse(all(a));
    set<int> st;
    for(auto e : a) st.insert(e);

    if(st.size() == 1)
    {
        cout << "No" << nl; return;
    }

    vector<int> res(n + 1);
    int mx = *max_element(all(a));
   
    
    cout << "Yes" << nl;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == mx) cout << 2 << " ";
        else cout << 1 << " ";
    }
    
    cout << nl;
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