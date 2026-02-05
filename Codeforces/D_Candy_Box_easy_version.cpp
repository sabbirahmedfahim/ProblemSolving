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

    map<int, int> mp;
    for(auto &e : a) mp[e]++; 

    int mx_occ = 0;
    vector<int> b;
    for(auto [x, y] : mp)
    {
        mx_occ = max(mx_occ, y);
        b.push_back(y);
    }
    sort(all(b)); reverse(all(b));

    set<int> availableTypes;
    for (int i = 1; i <= mx_occ; i++)
    {
        availableTypes.insert(i);
    }
    
    int cnt = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if(availableTypes.empty()) break;

        while(!availableTypes.empty() && *prev(availableTypes.end()) > b[i])
        {
            availableTypes.erase(prev(availableTypes.end()));
        }

        // cerr << *prev(availableTypes.end()) << nl;
        cnt += *prev(availableTypes.end());
        availableTypes.erase(prev(availableTypes.end()));
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