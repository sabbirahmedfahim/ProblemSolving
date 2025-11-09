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
    int n; cin >> n;
    vector<int> a(n + 1);
    pbds<int> o_mulset;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(i > a[i]) o_mulset.insert(a[i]);
    }
    // print(o_mulset);

    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i > a[i])
        {
            cnt += o_mulset.size() - o_mulset.order_of_key(i + 1);
            o_mulset.erase(o_mulset.find_by_order(o_mulset.order_of_key(a[i])));
        }
    }

    cout << cnt << nl;
}
int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}