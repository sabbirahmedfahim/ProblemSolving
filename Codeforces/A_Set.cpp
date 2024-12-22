#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

void solve()
{
    ll l, r, k; cin >> l >> r >> k;
    ll lowerRange = l, upperRange = r;
    while (l <= r)
    {
        ll mid = l + (r-l)/2;
        if(mid * k > upperRange) r = mid-1;
        else l = mid + 1;
    }
    cout << l - lowerRange << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}