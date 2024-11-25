#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n; ll s; cin >> n >> s;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;

    ll sum = 0, cnt = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum >= s && l <= r)
        {
            sum -= v[l]; l++;
            // l++; cnt++;
        }
        // cout << l << " ";
        cnt += l;
    }

    cout << cnt << nl;

    return 0;
}