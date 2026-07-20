#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
if x, y = x + 1
then if (x - 1) % 3 == 0 then yes
     else no
*/
bool chk(int x, int y)
{
    while (x > 0 && y > 0)
    {
        if(x >= y)
        {
            x -= 2; y--;
        }
        else 
        {
            y -= 2; x--;
        }
    }
    
    return x == 0 && y == 0;
}
void solve()
{
    int x, y; cin >> x >> y;

    if(x == 0 && y == 0)
    {
        cout << "YES" << nl; return;
    }

    // cout << "Expected : " << chk(x, y) << nl;

    while (x > 0 && y > 0)
    {
        if(x > y) swap(x, y);  // x <= y

        if(y - x == 1)
        {
            x--;
            if(x % 3 == 0) cout << "YES" << nl;
            else cout << "NO" << nl;

            return;
        }
        if(x == y)
        {
            if(x % 3 == 0) cout << "YES" << nl;
            else cout << "NO" << nl;

            return;
        }

        int diff = y - x;
        y -= (diff / 2) * 2;
        x -= diff / 2;

        if(x < 0)
        {
            cout << "NO" << nl; return;
        }
        if(x == 0 && y == 0)
        {
            cout << "YES" << nl; return;
        }
    }
    
    cout << "NO" << nl;
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
