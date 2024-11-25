#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, c; cin >> n >> c;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] += i+1;
    }
    sort(all(v));
    // print(v);
    
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] <= c)
        {
            c -= v[i]; cnt++;
        }
        else break;
    }
    cout << cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}