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

    int n, k; cin >> n >> k;

    vector<int> a(n);
    for(auto &e : a) cin >> e;

    pbds<pair<int, int>> o_set;
    for (int l = 0, r = 0; r < n; r++)
    {
        o_set.insert({a[r], r});
        if(r - l + 1 == k)
        {
            auto it = o_set.find_by_order((k-1)/2);
            cout << it->first << " ";

            o_set.erase({a[l], l});
            l++;
        }
    }

    return 0;
}