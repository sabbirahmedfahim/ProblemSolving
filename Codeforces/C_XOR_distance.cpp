#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, r; cin >> a >> b >> r;

    if(a == b)
    {
        cout << 0 << nl; return;
    }

    int who = -1, currR = 0;
    for (int i = 63; i >= 0; i--)
    {
        int x = (a >> i) & 1, y = (b >> i) & 1;

        if(x != y && who == -1)
        {
            who = max(a, b);
        }
        else if(x != y && who == a)
        {
            if(x == 1 && (1LL << i) <= r) 
            {
                currR += (1LL << i); r -= (1LL << i);
            }
        }
        else if(x != y && who == b)
        {
            if(y == 1 && (1LL << i) <= r) 
            {
                currR += (1LL << i); r -= (1LL << i);
            }
        }
    }
    
    cout << abs((a ^ currR) - (b ^ currR)) << nl;
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