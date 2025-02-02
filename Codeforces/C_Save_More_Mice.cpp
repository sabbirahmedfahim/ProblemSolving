#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll hole, k; cin >> hole >> k; deque<ll> v(k); for(auto &e : v) cin >> e;
    sort(all(v)); reverse(all(v));
    
    auto canWePlace = [&](ll mid)
    {
        ll cnt = 0, cat = 0;
        for (int i = 0; i < k; i++)
        {
            ll need = hole - v[i];
            cat += need;
            cnt++;
            if(cat >= v[i]+need) break;
            if(cnt >= mid) return true;
        }
        return false;
    };

    ll l = 0, r = k, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid; l = mid + 1;
        }
        else r = mid - 1;
    }
    

    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
