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
    int n; cin >> n; vector<int> a(n);
    for(auto &e : a) cin >> e;

    pbds<int> p;
    for(auto e : a) p.insert(e);

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if(a[i] > a[j]) res += p.order_of_key(a[j]);
            p.erase(a[j]);
        }
        p.erase(a[i]);
        for (int j = i + 2; j < n - 1; j++)
        {
            p.insert(a[j]);
        }
    }
    cout << res << nl;

    // ll res = 0;
    // for (int i = 0; i < n-1; i++)
    // {
    //     if(a[i] > a[i + 1]) res += p.order_of_key(a[i + 1]);

    //     p.erase(a[i]);
    // }
    // cout << res << nl;

    return 0;
}