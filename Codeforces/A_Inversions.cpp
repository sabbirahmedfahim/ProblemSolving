// https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/A
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
    
    int n; cin >> n;
    while (n--)
    {
        int data; cin >> data;
        cout << o_set.size() - o_set.order_of_key(data + 1) << " ";
        o_set.insert(data);
    }

    return 0;
}