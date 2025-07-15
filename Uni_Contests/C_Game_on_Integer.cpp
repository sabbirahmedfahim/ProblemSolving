// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a)); reverse(all(a));

    multiset<int> neg, pos;
    for(auto e : a)
    {
        if(e >= 0) pos.insert(e);
        else neg.insert(e);
    }

    // cout << neg.size() << " " << pos.size() << nl; // ok

    ll curr_sum = 0;
    ll mx_at_any_point = -1E18, mn_at_any_point = 1E18;

    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0) // roy's turn
        {
            curr_sum += a[i];

            if(a[i] >= 0)
            {
                auto it = pos.find(a[i]);
                pos.erase(it);
            }
            else 
            {
                auto it = neg.find(a[i]);
                neg.erase(it);
            }
        }
        else
        {
            if(!pos.empty())
            {
                auto it = --pos.end();
                curr_sum -= *it;
                // --pos.end();
                pos.erase(it);
            }
            else 
            {
                auto it = --neg.end();
                curr_sum -= *it;
                neg.erase(it);
            }
        }

        // cout << "#" << i << nl;
        // print(pos); print(neg);
        // cout << nl;


        if((i & 1)) mn_at_any_point = min(mn_at_any_point, curr_sum);
        else mx_at_any_point = max(mx_at_any_point, curr_sum);
        
        if(i >= 1) // maybe i should not stop there for at least one person
        {
            if(1)
            {
                // cout << "##" << i << nl;
                if((i & 1) && (pos.empty() && neg.size() == 1)); // Hriday knows Roy will add neg, it will minimize
                else if((i & 1) && (pos.empty() && neg.size() != 1))
                {
                    cout << mn_at_any_point << nl;  return;
                }

                if((i % 2 == 0) && (pos.empty() && !neg.empty())); // Roy alternates the turn because there are only neg remaining to maximize
                else if(i % 2 == 0)
                {
                    cout << mx_at_any_point << nl; return;
                }

                if(i == n - 1)
                {
                    if(i & 1) cout << min(mn_at_any_point, mx_at_any_point) << nl; 
                    else cout << max(mx_at_any_point, mx_at_any_point) << nl; 
                    return;
                }
            }
        }
    }
    
    // cout << mx_at_any_point << nl;
    // cout << mx_at_any_point << " -- " << mn_at_any_point << nl;
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