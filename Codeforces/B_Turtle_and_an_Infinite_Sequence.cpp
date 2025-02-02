// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation: there is a pattern, OR of (n-m) to (n+m), it will take O(n^2)
*/
void solve() // naive ***
{
    int n, m; cin >> n >> m;
    int OR = 0;
    for (int i = max(0, n-m); i <= n+m; i++)
    {
        OR  |= i;
    }
    cout << OR << nl;
}
void solve2()
{
    ll n, m; cin >> n >> m;
    ll OR = 0;
    
    ll l = max(1ll*0, n-m), r = n+m;
    for (ll k = 0; k <= 31; k++)
    {
        ll x = l/(1 << k), y = r/(1 << k);
        
        // cout << x << " " << y << nl;
        if(x & 1 || y & 1 || x != y) OR += (1 << k);
    }
    cout << OR << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << "test case-" << i << nl;
        solve2();
    }
    

    return 0;
}