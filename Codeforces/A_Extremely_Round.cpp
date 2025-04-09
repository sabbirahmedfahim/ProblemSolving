#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // less_equal for multiset

pbds<int> p;
void preCalc()
{
    for (int i = 1; i <= 999999; i++)
    {
        int digit = 0;
        int x = i;
        while (x)
        {
            if(x%10 != 0) digit++;
            x/=10;
        }
        if(digit == 1) p.insert(i);
    }
}
void solve()
{
    int n; cin >> n;

    cout << p.order_of_key(n+1) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preCalc();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}