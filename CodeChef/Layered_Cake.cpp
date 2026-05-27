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

void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(n),b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    pbds<int> p;
    for(auto e : a) p.insert(e);


    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        cnt += p.size() - p.order_of_key(b[i] + 1);
    }
    
    cout << cnt << nl;
}
int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}

/* 
k-th smallest element (0-based) → *o_mulset.find_by_order(x)
count of elements strictly < x → o_mulset.order_of_key(x)

erase from multiset → 
o_mulset.erase(o_mulset.find_by_order(o_mulset.order_of_key(x)));
*/