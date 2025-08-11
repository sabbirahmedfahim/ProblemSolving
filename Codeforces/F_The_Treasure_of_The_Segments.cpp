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

bool cmp(pair<int, int> x, pair<int, int> y)
{
    if(x.first == y.first) return x.second > y.second;
    return x.first < y.first;
}
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(all(a), cmp);
    // for(auto [x, y] : a) cout << x << " " << y << nl;
    pbds<int> L, R;

    for (int i = 0; i < n; i++)
    {
        R.insert(a[i].first);
    }

    int res = 1E9;
    for (int i = 0; i < n; i++)
    {
        R.erase(R.find_by_order(R.order_of_key(a[i].first)));

        int l = L.order_of_key(a[i].first), r = R.size() - R.order_of_key(a[i].second + 1);
        res = min(res, l + r);

        L.insert(a[i].second);
    }

    cout << res << nl;
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