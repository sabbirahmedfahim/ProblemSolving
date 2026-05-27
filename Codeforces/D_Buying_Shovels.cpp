#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;

    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        if(n % i == 0 && i <= k)
        {
            int arek = n / i;
            ans = min(ans, n / i);

            if(arek <= k) ans = min(ans, n / arek);
        }
    }

    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}