// solution
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll x, n; cin >> x >> n;
    
    ll d; 
    if(n%4 == 0) d = 0;
    else if(n%4 == 2) d = 1;
    else if(n%4 == 1) d = -n;
    else if(n%4 == 3) d = n+1;

    if(x%2) cout << x - d << nl;
    else cout << x + d << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}