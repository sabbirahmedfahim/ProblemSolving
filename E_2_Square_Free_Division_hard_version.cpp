#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; // k is useless
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> st;
    int cnt = 1;
    for(auto e : a)
    {
        // if(st.count(e))
        // {
        //     cnt++; 
        //     st.clear();
        // }

        map<int, int> mp;
        int data = e;
        for (int i = 2; i * i <= data; i++)
        {
            while (data % i == 0)
            {
                mp[i]++;
                data /= i;
            }
        }
        if(data > 1) mp[data]++;
        // mp[data]++;
        
        int val = 1;
        for(auto [x, y] : mp)
        {
            if(y & 1) val *= x;
        }

        if(st.count(val))
        {
            if(k)
            {
                k--; continue;
            }
            
            cnt++; 
            st.clear();
            st.insert(val);
        }
        else st.insert(val);
        // print(st);
    }

    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}