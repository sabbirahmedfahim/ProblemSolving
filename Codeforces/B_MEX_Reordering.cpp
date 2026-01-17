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

    int secondMax = 150;
    for(auto e : a)
    {
        if(e > 0) secondMax = min(e, secondMax);
    }

    map<int,int> mp;
    for(auto e : a) mp[e]++;

    if(mp.count(0) && mp.count(1))
    {
        cout << "YES" << nl;
    }
    else if(mp.count(0) && mp[0] == 1 && secondMax > 1)
    {
        cout << "YES" << nl; 
    }
    else cout << "NO" << nl;
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