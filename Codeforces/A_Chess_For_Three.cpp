// solution
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int x, y, z; cin >> x >> y >> z;

    if((x+y+z)%2 == 1) cout << -1 << nl;
    else cout << ((x+y+z) - max(0, z - x - y))/2 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}