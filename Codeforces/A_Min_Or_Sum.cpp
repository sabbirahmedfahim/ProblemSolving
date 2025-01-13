// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
let, we're initializing the values of the array 0(after doing OR), 
adding ans variable to the last index.
*/
void solve()
{
    int n; cin >> n; vector<int> vec(n); for(auto &c : vec) cin >> c;
    int ans = 0;
    for(auto data : vec) ans |= data; 
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}