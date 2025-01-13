#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &c : v) cin >> c;
    int cnt = 1;
    cout << cnt << " ";
    ll mx = v[0];
    for (int i = 1; i < n; i++)
    {
        cnt = 0;
        if(v[i] > mx) 
        {
            cnt++; mx = v[i];
        }
        cout << cnt << " ";
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}