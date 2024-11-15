#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    cout << ((n*10 <= k && n*12 >= k)? "YES" : "NO" ) << nl; 
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}