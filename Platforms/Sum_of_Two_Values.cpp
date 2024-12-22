#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; ll k; cin >> n >> k;
    vector<ll> v(n); for(auto &data : v) cin >> data;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        if(mp.count(k - v[i]))
        {
            cout << mp[k - v[i]] + 1 << " " << i + 1 << nl;
            return 0;
        }
        else mp[v[i]] = i;
    }
    cout << "IMPOSSIBLE" << nl;

    return 0;
}