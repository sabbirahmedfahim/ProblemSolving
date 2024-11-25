#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
a -> the number of coins of value n
b -> the number of coins of value 1
n -> the value n
s -> the required total value
*/
void solve()
{
    ll a, b, n, s; cin >> a >> b >> n >> s;
    ll min_1_laghbe = s%n;
    
    if(min_1_laghbe > b) cout << "NO" << nl;
    else cout << ((a*n + b >= s)? "YES" : "NO" ) << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}