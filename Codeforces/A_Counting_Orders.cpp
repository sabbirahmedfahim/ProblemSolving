// resolved from tle eliminators [good logic, i should try again later]
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

const int MOD = 1E9 + 7;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    sort(all(b)); reverse(all(b));

    pbds<int> p;
    for(auto e : a) p.insert(e);

    ll res = 1;
    for (int i = 0; i < n; i++)
    {
        if(p.size() - p.order_of_key(b[i] + 1) - i <= 0) 
        {
            cout << 0 << nl; return;
        }

        res *= 1ll * p.size() - p.order_of_key(b[i] + 1) - i;
        res %= MOD;
    }
    
    cout << res << nl;
}
int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}