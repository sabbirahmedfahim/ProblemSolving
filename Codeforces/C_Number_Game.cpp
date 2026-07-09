#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    if(n == 1 || n == 2)
    {
        if(n == 1) cout << "FastestFinger" << nl;
        else cout << "Ashishgup" << nl;
        return;
    }

    if(n & 1)
    {
        cout << "Ashishgup" << nl; return;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            int j = n / i;
            if(i == 2 || j == 2) continue;
            if(((i & 1) || (j & 1)) && (i % 2 == 0 || j % 2 == 0))
            {
                // cerr << i << " : " << j;
                cout << "Ashishgup" << nl; return;
            }
        }
    }
    
    cout << "FastestFinger" << nl;
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