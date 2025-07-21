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
    int n; cin >> n; /* distinct values */
    vector<int> a(n); for(auto &e : a) cin >> e;
    pbds<int> o_set;
    for(auto e : a) o_set.insert(e);

    ll cnt = 0;
    for(auto e : a)
    {
        cnt += o_set.order_of_key(e);
        o_set.erase(e);
    }
    cout << cnt << nl;
}
int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; while (t--)
    {
        solve();
    }

    return 0;
}