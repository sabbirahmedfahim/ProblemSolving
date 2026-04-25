#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    
    deque<ll> odd, even;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;

        sum += data;

        if(i % 2 == 0) odd.push_back(data);
        else even.push_back(data);
    }

    sort(all(odd));
    sort(all(even));

    int oddLen = odd.size(), evenLen = even.size();

    ll reduce = 0;
    for (int i = 0; i < m; i++)
    {
        int idx; cin >> idx;

        if(idx & 1)
        {
            if(!odd.empty())
            {
                if(oddLen == odd.size() || odd.back() > 0) 
                {
                    reduce += odd.back();
                    odd.pop_back();
                }
            }
        }
        else 
        {
            if(!even.empty())
            {
                if(evenLen == even.size() || even.back() > 0) 
                {
                    reduce += even.back();
                    even.pop_back();
                }
            }
        }
    }
    
    // cout << reduce << nl;
    cout << sum - reduce << nl;
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}