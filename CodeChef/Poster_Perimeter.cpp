#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, k; cin >> n >> m >> k;
    int ans = 1E6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // ans = min(ans, (2*(n+m)));
            // cout << 2*(i+j) << nl;
            int tmp = 2*(i+j);
            ans = min(ans, abs(k-tmp));
        }
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