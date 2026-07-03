#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    for(auto &e : a) e = abs(e);
    for(auto &e : b) e = abs(e);

    map<pair<int, int>, int> mp;
    int extra = 0, howManyZeroAtB = 0;
    for (int i = 0; i < n; i++)
    {
        if(b[i] == 0) howManyZeroAtB++;

        if(a[i] == 0 && b[i] == 0) 
        {
            extra++; continue;
        }
        if(a[i] == 0 || b[i] == 0) continue;

        if(a[i] % b[i] == 0)
        {
            mp[{a[i] / b[i], 1}]++;
        }
        if(b[i] % a[i] == 0)
        {
            mp[{1, b[i] / a[i]}]++;
        }
    }

    int ans = 0;
    for(auto [x, y] : mp)
    {
        ans = max(ans, y);
    }

    // cerr << ans + extra << nl;
    cout << max(ans + extra, howManyZeroAtB) << nl;

    return 0;
}