// Resolved: Must watch the resolved video for better understanding.
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v1(n), v2(n);
    for(auto &data : v1) cin >> data;
    for(auto &data : v2) cin >> data;
    int cnt = 0, idx = -1;
    for (int i = 0; i < n; i++)
    {
        if(min(v1[i], v2[i]) != v2[i]) 
        {
            cnt++; idx = i;
        }
    }

    ll ans = 0;
    if(cnt != 1) 
    {
        for (int i = 0; i < n; i++) ans += min(v1[i], v2[i]);
    }
    else // just ekta value regular price e min thakle corner case e porbe
    {
        for (int i = 0; i < n; i++) ans += v2[i];
        ll res = ans;
        for (int i = 0; i < n; i++)
        {
            if(i != idx) 
            {
                ll currVal = res - v2[idx] - v2[i] + v1[idx] + v1[i];
                ans = min(ans, currVal);
            }
        }
    }
    cout << ans << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}