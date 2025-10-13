#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> res;
    res.push_back(1);
    int prev = 1, curr = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if((a[i + 1] - a[i]) > prev) 
        {
            res.push_back(++curr); 
            prev = (a[i + 1] - a[i]);
        }
        else if((a[i + 1] - a[i]) == prev) 
        {
            if(res.size() - 1 >= a[i + 1] - a[i]) res.push_back(res[a[i + 1] - a[i]]);
            else 
            {
                
            }
        }
        else 
        {
            res.push_back(curr); 
            // prev = a[i + 1] - a[i];
        }
    }
    
    print(res);
}
int_fast32_t main()
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