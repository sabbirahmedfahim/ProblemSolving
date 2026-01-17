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
    vector<pair<int, int>> a(n);
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        p.insert(a[i].second);
    }
    sort(all(a));

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        p.erase(p.find_by_order(p.order_of_key(a[i].second)));

        cnt += p.order_of_key(a[i].second + 1);
        // cerr << cnt << nl;
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
1 2
1 3
2 5
*/