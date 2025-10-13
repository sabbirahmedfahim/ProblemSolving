// resolved from AlgoBot
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
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first; 
        a[i].second = i;
    }
    
    sort(all(a)); // value wise sorted and got new formation of indices

    vector<int> pref(n + 1);
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i].first;
    }
    
    stack<int> st;
    vector<int> res(n);

    for (int i = 0; i < n; i++)
    {
        st.push(a[i].second);

        if(i == n - 1 || a[i + 1].first > pref[i])
        {
            while (!st.empty())
            {
                res[st.top()] = i;
                st.pop();
            }
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