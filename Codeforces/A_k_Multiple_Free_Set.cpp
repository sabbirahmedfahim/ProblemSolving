#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n>>k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> st;
    for(auto e : a) st.insert(e);

    sort(all(a));

    int cnt = 0;
    set<int> vis;
    for (int i = 0; i < n; i++)
    {
        if(vis.count(a[i])) continue;
        if(st.count(a[i] * k)) 
        {
            vis.insert(a[i] * k);
        }

        cnt++;
    }
    
    cout << cnt << nl;

    return 0;
}