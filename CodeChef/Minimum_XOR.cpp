#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    int XOR = 0;
    for(auto data : v) XOR ^= data;
    if(XOR == 0)
    {
        cout << 0 << nl; return;
    } 
    int ans = XOR;
    for(auto data : v) ans = min(ans, XOR^data); // xor kora mane kinto value ta remove kora. fun!!
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}