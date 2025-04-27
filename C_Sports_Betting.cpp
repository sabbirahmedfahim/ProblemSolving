#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a));
    // print(a);
    set<int> st;
    map<int, int> mp;
    for(auto e : a) 
    {
        st.insert(e);
        mp[e]++;
    }
    
    for(auto [key, val] : mp)
    {
        if(val >= 4) 
        {
            cout << "Yes" << nl; return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int x = a[i], y = a[i] + 1, z = a[i] + 2;
        if(mp.count(x) && mp.count(y) && mp.count(z))
        {
            bool flag = true;
            if(mp[x] >= 2 && mp[y] >= 1 && mp[z] >= 2);
            // else if(mp[x] >= 1 && mp[y] >= 2 && mp[z] >= 2);
            else if(mp[x] >= 2 && mp[y] >= 2 && mp[z] >= 1);
            // else if(mp[x] + mp[y] + mp[z] >= 5);
            else flag = false;
            if(flag)
            {
                cout << "Yes" << nl; return;
            }
        }
    }
    
    cout << "No" << nl;
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