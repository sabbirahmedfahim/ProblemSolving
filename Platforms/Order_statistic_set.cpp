// https://www.spoj.com/problems/ORDERSET/en/
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

    pbds<int> o_set;

    int q; cin >> q;
    while (q--)
    {
        char c; cin >> c;
        int x; cin >> x;

        if(c == 'I') // insert
        {
            if(o_set.find(x) == o_set.end()) o_set.insert(x);
        }
        else if(c == 'D') // delete
        {
            if(o_set.find(x) != o_set.end()) o_set.erase(x);
        }
        else if(c == 'K') // k-th smallest
        {
            if(o_set.size() < x) cout << "invalid" << nl;
            else cout << *o_set.find_by_order(x-1) << nl;
        }
        else if(c == 'C') // count smaller than x
        {
            cout << o_set.order_of_key(x) << nl;
        }

    }

    return 0;
}