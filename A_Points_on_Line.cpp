// took mathematical hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // less_equal for multiset

ll nCr(ll n, ll r) // O(r * log(n))
{
    ll p = 1, k = 1, m;
    if (n - r < r) r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n, k *= r;
            m = __gcd(p, k);
            p /= m, k /= m;
            n--, r--;
        }
    }
    else p = 1;
    return p;
}

int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;
    // for(auto &e : a) e = abs(e);

    pbds<ll> o_mulset;
    for(auto e : a) o_mulset.insert(e);

    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        ll lo = a[i] - k, hi = a[i] + k;
        ll tot = o_mulset.order_of_key(hi + 1);
        tot -= o_mulset.order_of_key(lo); 

        if(tot >= 3) res += nCr(tot - 1, 3 - 1); // because one slot is fixed each time
        // cerr << tot << " -- " << res << nl;

        o_mulset.erase(o_mulset.find_by_order(o_mulset.order_of_key(a[i])));
    }
    
    cout << res << nl;

    return 0;
}