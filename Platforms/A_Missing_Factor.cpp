#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int mx = 0;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            mx = max(mx, i);

            n /= i;
        }
    }
    
    if(n > 1) mx = max(mx, n);

    cout << mx << nl;

    return 0;
}