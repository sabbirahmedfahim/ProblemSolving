#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    if(n == 1) 
    {
        cout << "NO" << nl; return;
    }

    ll one = 0;
    ll sum = 0; 
    for(auto data : v) 
    {
        sum += data;
        if(data == 1) one++;
    }
    ll need = (one * 2) + (n-one);
    if(sum >= need) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}