// WoooOOoOoowwW this is getting AC, just fixed int to ll in the map. 
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
map<pair<int, bool>, ll> DP;
ll getAns(vector<int> &a, vector<int> &b, bool who, int curr)
{
    if(curr >= a.size()) return 0;

    if(DP.count({curr, who})) 
    {
        // cerr << "working!" << nl;
        return DP[{curr, who}];
    }

    if(who)
    {
        ll nibo = a[curr] + getAns(a, b, !who, curr + 1);
        ll nibona = getAns(a, b, who, curr + 1);
        return DP[{curr, who}] = max(nibo, nibona);
    }
    else 
    {
        ll nibo = b[curr] + getAns(a, b, !who, curr + 1);
        ll nibona = getAns(a, b, who, curr + 1);
        return DP[{curr, who}] = max(nibo, nibona);
    }
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    DP.clear();
    ll x = getAns(a, b, true, 0);
    DP.clear();
    ll y = getAns(b, a, true, 0);

    cout << max(x, y) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}