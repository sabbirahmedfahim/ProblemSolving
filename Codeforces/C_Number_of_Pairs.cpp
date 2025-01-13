// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve() // O(n^2)
{
    ll n, left, right; cin >> n >> left >> right;
    vector<ll> v(n), sumOfPairs; for(auto &data : v) cin >> data;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            sumOfPairs.push_back(v[i]+v[j]);
        }
    }
    sort(all(sumOfPairs));
    // print(sumOfPairs);

    auto it = lower_bound(all(sumOfPairs), left);
    auto it2 = upper_bound(all(sumOfPairs), right);
    cout << (it2-sumOfPairs.begin()) - (it-sumOfPairs.begin()) << nl;
}
void solve2() // O(n*logN)
{
    ll n, left, right; cin >> n >> left >> right;
    vector<ll> v(n); for(auto &data : v) cin >> data;
    sort(all(v));
    // print(v);

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // right - v[i], left - v[i]
        // lower bound, upper bound [draw for better understanding]

        auto hi = upper_bound(v.begin()+i+1, v.end(), right - v[i]); // not data - right
        auto lo = lower_bound(v.begin()+i+1, v.end(), left - v[i]);

        cnt += hi - lo;
        // cout << i << " -> " << hi - lo << nl;
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}