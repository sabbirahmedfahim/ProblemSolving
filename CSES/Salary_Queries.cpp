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

int main() 
{ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    pbds<int> o_mulset, duplicate;
    vector<int> v(n); map<int, int> salaryUpdate;
    for(auto &e : v) cin >> e;
    for (int i = 0; i < n; i++)
    {
        o_mulset.insert(v[i]); salaryUpdate[i + 1] = v[i];
    }
    

    while (q--)
    {
        char c; cin >> c; 
        if(c == '?') 
        {
            int a, b; cin >> a >> b;
            int x = o_mulset.size() - o_mulset.order_of_key(b + 1); // working
            int willTake = o_mulset.size() - o_mulset.order_of_key(a) - x;

            // duplicate handle
            int y = duplicate.size() - duplicate.order_of_key(b + 1);
            int willReduce = duplicate.size() - duplicate.order_of_key(a) - y;

            cout << willTake - willReduce << nl;
        }
        else if(c == '!')
        {
            int k, x; cin >> k >> x;
            o_mulset.insert(x);
            duplicate.insert(salaryUpdate[k]);
            salaryUpdate[k] = x;
        }
    }
    

    return 0;
}