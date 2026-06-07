// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b, c, n, m;
    cin >> a >> b >> c >> n >> m;
    
    int ans = a + b + c;
    if(a + c > n) ans = min(ans, n);
    if(b + c > m) ans = min(ans, m);
    cout << ans << nl;

    return 0;
}