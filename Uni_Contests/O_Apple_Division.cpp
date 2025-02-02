#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n); for(auto &data : v) cin >> data;

    ll mn = LLONG_MAX;
    for (int mask = 0; mask < (1<<n); mask++)
    {
        ll a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if((mask >> i) & 1) a += v[i];
            else b += v[i];
        }
        mn = min(mn, abs(a-b));
    }
    cout << mn << nl;

    return 0;
}