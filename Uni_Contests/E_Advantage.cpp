#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n), tmp; for(auto &data : v) cin >> data;
    tmp = v; sort(tmp.rbegin(), tmp.rend());
    ll first_mx = tmp[0], second_mx = tmp[1];
    for(auto &data : v)
    {
        if(data == first_mx) data = (first_mx - second_mx);
        else data = (data - first_mx);
    }
    print(v);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}