#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> a(n), b(n); for(auto &data : a) cin >> data;
    b[0] = a[0];
    ll mx_occ = 1;
    map<ll, ll> mp, tracking_b_duplicate; mp[b.front()]++;
    for(auto data : a) tracking_b_duplicate[data]++;
    ll suru = 1;
    for (int i = 1; i < n; i++)
    {
        if(mp.count(a[i]) == mx_occ) 
        {
            ll data;
            for (int j = suru; j <= n; j++) 
            {
                if(!tracking_b_duplicate.count(j))
                {
                    b[i] = j;
                    tracking_b_duplicate[j]++;
                    suru = j+1;
                    break;
                }
            }
        }
        else
        {
            mp[a[i]]++;
            b[i] = a[i];
            ll tmp = mp.count(a[i]);
            mx_occ = max(mx_occ, tmp);
        }
    }
    print(b);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}