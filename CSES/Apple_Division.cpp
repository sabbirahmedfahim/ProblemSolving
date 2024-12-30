#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation: since n <= 20 when can try bitmask
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;

    ll mn = LLONG_MAX;
    for (int mask = 0; mask < (1<<n); mask++)
    {
        ll sum = 0;
        for (int k = 0; k < n; k++)
        {
            if((mask >> k) & 1) sum += v[k];
            else sum -= v[k];
        }
        mn = min(abs(sum), abs(mn));
    }
    cout << mn << nl;

    return 0;
}