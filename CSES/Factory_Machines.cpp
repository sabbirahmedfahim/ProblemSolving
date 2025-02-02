#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, t; cin >> n >> t; vector<ll> v(n); for(auto &c : v) cin >> c;

    auto canWePlace = [&](ll seconds)
    {
        ll data = 0;
        for (int i = 0; i < n; i++)
        {
            data += (seconds/v[i]);
            if(data >= t) return true;
        }
        return false;
    };

    ll l = 1, r = 1E18, mid, ans;
    while (l <= r)
    {
        mid = l+(r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid; r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << nl;

    return 0;
}