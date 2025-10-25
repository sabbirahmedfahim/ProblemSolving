// resolved from the TLE Eliminators (Simplify the Equation a[i] % x = a[n - i + 1])
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

    set<int> st;
    for(auto e : a) st.insert(e);
    if(st.size() == 1)
    {
        cout << 0 << nl; return;
    }

    int GCD = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        GCD = __gcd(GCD, abs(a[i] - a[j]));
    }
    
    cout << GCD << nl;
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