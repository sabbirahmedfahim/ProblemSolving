#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
think easily :D
*/
void solve()
{
    int x; cin >> x;
    // first bit ta off

    int a = 0, b = 0;
    if(__builtin_popcount(x) == 1)
    {
        cout << 0 << " " << x << nl; return;
    }

    for (int k = 31; k >= 0; k--)
    {
        // if((x >> k) & 1 ) cout << 1 << " ";
        // else cout << 0 << " ";
        if(((x & (1 << k)))) 
        {
            a += (1 << k);
            break;
        }
    }
    b = x - a;
    cout << min(a, b) << " " << max(a, b) << nl;
    // cout << (a^b) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}