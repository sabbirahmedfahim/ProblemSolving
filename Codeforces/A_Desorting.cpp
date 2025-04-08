#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    if(!is_sorted(all(a)))
    {
        cout << 0 << nl; return;
    }

    // i am sure the array is sorted
    int mn = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        mn = min(mn, a[i+1] - a[i]);
    }
    
    cout << (mn/2) + 1 << nl;
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