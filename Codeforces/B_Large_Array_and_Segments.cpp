// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    ll sum = accumulate(all(a), 0ll);
    // cout << sum << nl;

    ll target = x;
    ll l = 1, r = k, mid, okSegments = -1;
    while (l <= r) 
    {
        mid = l + (r-l)/2;

        if(sum * mid >= target) 
        {
            okSegments = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    if(okSegments == -1)
    {
        cout << 0 << nl; return;
    }

    ll arektaSum = (okSegments - 1) * sum; // read the commnets of the next line
    ll badJabe = (okSegments - 1) * n; // okSeg tho bad e jabe, -1 karon ekta imcomplete array te shob hoyto bad nao jete pare
    // cout << badJabe << nl;

    for (int i = n-1; i >= 0 ; i--)
    {
        arektaSum += a[i];
        
        if(arektaSum >= x) break;
        else badJabe++;
    }
    
    // cout << badJabe << nl;
    cout << n * k - badJabe << nl;
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