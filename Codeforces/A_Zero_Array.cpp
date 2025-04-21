#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n); for(auto &e : a) cin >> e;

    map<int, int> mp;
    for(auto e : a) mp[e]++;

    while (q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 2)
        {
            mp.erase(0);
            cout << mp.size() << nl;
        }
        else 
        {
            int pos, data; cin >> pos >> data; pos--;
            mp[a[pos]]--;
            if(mp[a[pos]] == 0) mp.erase(a[pos]);
            
            mp[data]++;
            a[pos] = data;
        }
    }
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