#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(auto &e : a) cin >> e.first >> e.second;

    sort(all(a));
    // for(auto e : a) cout << e.first << ' ' << e.second << nl;

    int curr = min(a[0].first, a[0].second);
    for (int i = 1; i < n; i++)
    {
        if(curr <= min(a[i].first, a[i].second)) curr = min(a[i].first, a[i].second);
        else curr = max(a[i].first, a[i].second);
    }
    
    cout << curr << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}