#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;

    deque<int> products(n), vouchers(k);
    for(auto &e : products) cin >> e;
    for(auto &e : vouchers) cin >> e;

    sort(all(products)); reverse(all(products));
    sort(all(vouchers));
    
    // print(products);
    // print(vouchers);

    ll tot_sum = 0;

    for (int i = 0; i < vouchers.size(); i++)
    {
        int curr_len = vouchers[i]; // from small to big
        int len = 0;

        for(auto &e : products)
        {
            len++;
            
            if(len == curr_len)
            {
                products.pop_front();
            }
            if(len == curr_len) break;
    
            tot_sum += e;
            // cerr << tot_sum << nl;
            products.pop_front();
        }
    }

    for(auto e : products) tot_sum += e;

    cout << tot_sum << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}