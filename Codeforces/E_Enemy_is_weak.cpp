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

int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    pbds<int> L, R;
    for (int i = 0; i < n; i++) R.insert(a[i]);

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        R.erase(a[i]); // since the elements are distinct, don't worry

        int l = L.size() - L.order_of_key(a[i] + 1), r = R.order_of_key(a[i] + 1);
        if(l != 0 && r != 0) ans += 1ll * l * r;

        L.insert(a[i]);
    }
    
    cout << ans << nl;

    return 0;
}