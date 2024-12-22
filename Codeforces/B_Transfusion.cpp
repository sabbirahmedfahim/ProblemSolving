// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    ll oddSum = 0, evenSum = 0;
    for (int i = 1; i <= n; i++) 
    {
        ll data; cin >> data;
        (i & 1)? oddSum += data : evenSum += data;
    }

    ll even = n/2;
    ll odd = n - even;
    
    if((oddSum%odd != 0) || (evenSum%even != 0)) cout << "NO" << nl;
    else if((oddSum/odd) == (evenSum/even)) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}