#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x; cin >> x; 

    if(__builtin_popcount(x) == 1)
    {
        cout << -1 << nl; return;
    }


    int y = 0;
    bool skipFirst = true;
    for (int bit = 30; bit >= 0; bit--)
    {
        if(skipFirst && ((x >> bit) & 1))
        {
            skipFirst = false; continue;
        }
        if(skipFirst == false) y += (1<<bit);
    }

    // cout << y << nl;
    
    int z = (x^y);
    if(x+y > z && y+z > x && x+z > y) cout << y << nl;
    else cout << -1 << nl; 
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