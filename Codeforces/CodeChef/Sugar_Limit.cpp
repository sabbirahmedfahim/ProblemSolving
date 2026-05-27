#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool cmp(pair<int, int> x, pair<int,int> y)
{
    if(x.second == y.second) return x.first > y.first;
    return x.second < y.second;
}
void solve()
{
    int n; cin >> n;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second; 
    }
    sort(all(a), cmp);
    
    int sum = 0, mxRes = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i].first >= 0)
        {
            sum += a[i].first;
            mx = max(mx, a[i].second);
            mxRes = max(mxRes, sum - mx);
        }
    }
    
    cout << mxRes << nl;
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