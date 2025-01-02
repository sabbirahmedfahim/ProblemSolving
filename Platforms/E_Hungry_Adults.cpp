// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll d, x, y; cin >> d >> x >> y;
    ll ans = 0;
    vector<ll> maxHappiness;
    while (d--)
    {
        ll p, f; cin >> p >> f;
        maxHappiness.push_back(max(p, f));
    }
    sort(maxHappiness.rbegin(), maxHappiness.rend());
    for (int i = 0; i < x+y; i++)
    {
        ans += maxHappiness[i];
    }
    print(maxHappiness);
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}