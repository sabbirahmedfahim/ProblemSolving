// resolved from the Editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    for (int i = 1; i <= 20; i++)
    {
        if(n % 11 == 0)
        {
            cout << "YES" << nl; return;
        }

        n -= 111;
        if(n < 0) break;
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