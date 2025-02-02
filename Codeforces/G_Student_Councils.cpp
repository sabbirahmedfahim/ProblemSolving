// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int k, n; cin >> k >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    auto canWePlace = [&] (ll councils)
    {
        ll need = councils * k; 
        for(auto data : a) need -= min(councils, 1ll * data); // ekta group theke maximum min(a[i], councils) nite parbo [why?]
        
        return need <= 0;
        };

    ll l = 0, r = accumulate(all(a), 0ll)+1/k, mid, ans = -1; // 0ll vs 0 <---> AC vs WA :3
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

    return 0;
}