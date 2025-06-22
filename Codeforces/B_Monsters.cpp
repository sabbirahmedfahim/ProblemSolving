#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool cmp(pair<int, int> x, pair<int,int> y)
{
    if(x.first == y.first) return x.second < y.second;
    return x.first > y.first;
}
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &e : a) cin>>e;

    for(auto &e : a) e %= k;

    // print(a);
    vector<pair<int, int>> b;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0) res.push_back(i + 1);
        else 
        {
            b.push_back({a[i], i + 1});
        }
    }
    sort(all(b), cmp);
    for(auto [x, y] : b)
    {
        res.push_back(y);
    }
    print(res);
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