#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &e : v) cin >> e;

    bool isMatch = true;

    for (int i = 0; i < n/2 && isMatch; i++) // let, OK
    {
        if(v[i] <= (n-i-1)*2) isMatch = false; 
    }

    for (int i = (n/2); i < n && isMatch; i++) // let, OK
    {
        if(v[i] <= (i)*2) isMatch = false;
    }

    if(isMatch) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}