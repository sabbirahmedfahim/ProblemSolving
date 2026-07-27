#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> b(k);
    for(auto &e : b) cin >> e;
    set<int> forB;
    for(auto e : b) forB.insert(e);

    vector<int> pref(n);
    pref[0] = a[0];
    int mn = 1E18, mx = 0;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
        mn = min(mn, pref[i] - pref[0]);
        mx = max(mx, pref[i] - pref[0]);
    }
    // print(pref);
    // cerr << mn << " " << mx << nl;
    
    set<int> st;
    int ans = 0;
    for(auto e : b)
    {
        for (int i = 0; i < n; i++)
        {
            int data = e - pref[i];
            if((*forB.begin() > data - mn && *forB.begin() > data)) continue;
            if(*prev(forB.end()) < data + mx && *prev(forB.end()) < data) continue;
            if(!st.count(data))
            {
                vector<int> tmp(n); tmp[0] = a[0];
                set<int> arektaSt;
                for (int i = 0; i < n; i++)
                {
                    if(i == 0) tmp[i] += data;
                    else tmp[i] = tmp[i - 1] + a[i];
            
                    if(forB.count(tmp[i])) arektaSt.insert(tmp[i]);
                }
            
                if(forB == arektaSt) ans++;

            }
            st.insert(data);
        }
    }
    // print(st);

    cout << ans << nl;

    return 0;
}