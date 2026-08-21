#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    if(n % 3 == 0)
    {
        cout << 0 << nl; return;
    }

    if((n + 1) % 3 == 0)
    {
        cout << 1 << nl; return;
    }

    if(n % 5 == 0) n += 5;
    else n += 5 - (n % 5);

    if(n % 3 == 0)
    {
        cout << 1 << nl; return;
    }

    cout << 2 << nl;
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