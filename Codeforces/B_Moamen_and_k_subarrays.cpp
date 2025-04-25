// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve() 
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (auto &e : a) cin >> e;

    // Observation: elements are distinct
    set<int> st;
    for (auto e : a) st.insert(e);

    int cnt = 1;
    for (int i = 1; i < n; i++) 
    {
        auto next_value = st.upper_bound(a[i - 1]);
        if(next_value == st.end()) cnt++; // probably this condition will handle -1
        else if (a[i] != *next_value) cnt++;

        // st.erase(a[i - 1]); // No need to erase elements from set
    }

    if (cnt <= k) cout << "Yes" << nl;
    else cout << "No" << nl;
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
