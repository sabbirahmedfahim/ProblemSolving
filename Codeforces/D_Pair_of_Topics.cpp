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

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // less_equal for multiset

int main() 
{ 
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    
    pbds<int> p;
    ll good_pairs = 0;
    for (int i = 0; i < n; i++)
    {
        good_pairs += p.order_of_key(a[i]-b[i]);
        p.insert(b[i]-a[i]); // not a[i]-b[i]
    }
    
    cout << good_pairs << nl;

    return 0;
}