#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std; 
void solve() // AC
{
    int n, q; cin >> n >> q; vector<ll> sugarQuantity(n), prefSum(n);
    for(auto &data : sugarQuantity) cin >> data;
    sort(sugarQuantity.rbegin(), sugarQuantity.rend());
    prefSum[0] = sugarQuantity[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + sugarQuantity[i];
    // print(sugarQuantity);
    // print(prefSum);

    while (q--)
    {
        ll data; cin >> data;
        int l = 0, r = n-1, mid, ans = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(data <= prefSum[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if(ans == -1) cout << ans << nl;
        else cout << ans+1 << nl;
    }
}
void solve2() // using function
{
    int n, q; cin >> n >> q; vector<ll> sugarQuantity(n), prefSum(n);
    for(auto &data : sugarQuantity) cin >> data;
    sort(sugarQuantity.rbegin(), sugarQuantity.rend());
    prefSum[0] = sugarQuantity[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + sugarQuantity[i];

    while (q--)
    {
        ll data; cin >> data;
        auto lo = lower_bound(all(prefSum), data);
        if(lo == prefSum.end()) cout << -1 << nl;
        else cout << lo - prefSum.begin() + 1 << nl; // +1 for 1-based index
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}