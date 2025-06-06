// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // less_equal for multiset
void solve()
{
    int n; cin >> n; 
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        a[i] = {x, y};
    }
    
    sort(all(a)); 

    pbds<int> p;
    ll res = 0;
    for (int i = n-1; i >= 0; i--)
    {
        res += p.order_of_key(a[i].second);
        p.insert(a[i].second);
    }
    
    cout << res << nl;
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