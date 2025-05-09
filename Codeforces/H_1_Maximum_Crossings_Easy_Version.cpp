// resolved from the editorial (recommended)
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
    int n; cin>>n; vector<int> a(n); for(auto &e : a) cin >> e;
    // sort(all(a)); // invalid

    pbds<pair<int,int>> p;
    for (int i = 0; i < n; i++)
    {
        p.insert({a[i], i});
    }
    

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        p.erase({a[i], i});
        res += p.order_of_key({a[i] + 1, i});
    }
    
    cout << res << nl;
}
int main() 
{ 
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}