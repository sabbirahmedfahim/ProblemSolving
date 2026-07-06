#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int temperature, a, b, x, y; cin >> temperature >> a >> b >> x >> y;

    int ans = 0;

    if(x <= y)
    {
        if(temperature >= a)
        {
            int tempForA = temperature - a + 1;
            int koto = tempForA / x;
            if(tempForA % x != 0) koto++;
            
            ans += koto;
            temperature -= koto * x;
        }
        if(temperature >= b)
        {
            int tempForB = temperature - b + 1;
            int koto = tempForB / y;
            if(tempForB % y != 0) koto++;
            ans += koto;
        }
    }
    else 
    {
        if(temperature >= b)
        {
            int tempForB = temperature - b + 1;
            int koto = tempForB / y;
            if(tempForB % y != 0) koto++;
            ans += koto;
            temperature -= koto * y;
        }
        if(temperature >= a)
        {
            int tempForA = temperature - a + 1;
            int koto = tempForA / x;
            if(tempForA % x != 0) koto++;
            
            ans += koto;
        }
    }

    cout << ans << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}