#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int l, r, L, R; cin >> l >> r >> L >> R;

    if(l == L && r == R) cout << R - L << nl;
    else if(l == L) cout << min(r - l + 1, R - L + 1) << nl;
    else if(r == R) cout << min(r - l + 1, R - L + 1) << nl;
    else if(l > L && R > r) cout << r - l + 2 << nl;
    else if(l < L && R < r) cout << R - L + 2 << nl;
    else if(l < r && r < L) cout << 1 << nl;
    else if(L < R && R < l) cout << 1 << nl;
    else if(l < L) cout << r - L + 2 << nl;
    else if(l > L) cout << R - l + 2 << nl;
    else 
    {
        while (1)
        {
            ;
        }
        
    }
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