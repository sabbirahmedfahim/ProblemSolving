#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> A(m);
    for(auto &e : A) cin >> e;
    set<int> st;
    for(auto e : A) st.insert(e);

    vector<int> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = a[i] + pref[i - 1];
    }
    
    for (int j = n - 1; j >= 0; j--)
    {
        if(pref[j] < 0 && st.count(j + 1)) 
        {
            // for(auto &e : a) e = -e;
            for (int i = 0; i <= j; i++)
            {
                a[i] = -a[i];
            }
        
            pref[0] = a[0];
            for (int i = 1; i <= j; i++)
            {
                pref[i] = a[i] + pref[i - 1];
            }
        }
        else if(pref[j] == 0 && st.count(j + 1) && a[j] <= 0) 
        {
            // for(auto &e : a) e = -e;
            for (int i = 0; i <= j; i++)
            {
                a[i] = -a[i];
            }
        
            pref[0] = a[0];
            for (int i = 1; i <= j; i++)
            {
                pref[i] = a[i] + pref[i - 1];
            }
        }
    }
    
    // cout << pref[n - 1] << nl;
    cout << accumulate(all(a), 0ll) << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}