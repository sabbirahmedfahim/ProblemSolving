// resolved
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
/*
well, since all numbers are distinct, we don't have to care about dupliate values
*/
int main() 
{ 
    int n; cin >> n; vector<int> a(n);
    for(auto &e : a) cin >> e;

    pbds<int> p;
    // for(auto e : a) p.insert(e);

    vector<pair<int, int>> v(n);

    // count total numbers greater than a[i]
    for (int i = 0; i < n; i++)
    {
        int cnt = p.order_of_key(a[i]);
        cnt = p.size() - cnt;

        p.insert(a[i]);
        v[i].first = cnt;
    }
    
    p.clear();
    
    // count total numbers smaller than a[i]
    for (int i = n-1; i >= 0; i--)
    // for (int i = 0; i < n; i++) 
    {
        int cnt = p.order_of_key(a[i]);

        p.insert(a[i]);
        v[i].second = cnt;
    }

    ll res = 0;
    for(auto e : v)
    {
        res += (1ll * e.first * e.second);
    }
    cout << res << nl;

    // TLE
    // ll v = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n - 1; j++)
    //     {
    //         if(a[i] > a[j]) v += p.order_of_key(a[j]);
    //         p.erase(a[j]);
    //     }
    //     p.erase(a[i]);
    //     for (int j = i + 2; j < n - 1; j++)
    //     {
    //         p.insert(a[j]);
    //     }
    // }
    // cout << v << nl;

    return 0;
}