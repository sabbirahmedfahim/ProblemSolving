#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
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
    vector<int> a(n); for(auto &e : a) cin >> e;

    ll ans = 0;
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        ans += p.size() - p.order_of_key(a[i] + 1);

        p.insert(a[i]);
    }
    
    cout << ans << nl;
}
int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}