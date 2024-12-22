// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, ans = 0; cin>> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        // cout << ans << nl;
        ans = __gcd(ans, abs(v[i] - i));
    }
    
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}