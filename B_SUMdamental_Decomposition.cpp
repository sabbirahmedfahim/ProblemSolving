// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;

    if(n == 1) // i consider only edge case
    {
        if(x == 0) cout << -1 << nl;  
        else cout << x << nl;
        return;
    }

    vector<int> bits(30, 0);
    for (int bit = 0; bit < 30; bit++)
    {
        if((x >> bit) & 1) bits[bit] = 1;
    }
    // print(bits);


    if(__builtin_popcount(x) >= n) cout << x << nl;
    else
    {
        n -= __builtin_popcount(x);
        int res = n + x;
        if(n > 0 && (n & 1)) 
        {
            res --;
            for (int bit = 0; bit < 30; bit++)
            {
                if(bits[bit] == 0)
                {
                    res += (1<<bit); break;
                }
            }
        }
        cout << res << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
