// resolved (understood Pigeonhole Principle)
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(auto &e : a) cin >> e; 

    if(n <= m)
    {
        int ans = abs(a[0] - a[1]);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(i == 0 && j == 1) continue;
    
                // cerr << abs(a[i] - a[j]) << ' ';
                // cerr << a[i] << " - " << a[j] << " = " << abs(a[i] - a[j]) << nl;
                ans *= abs(a[i] - a[j]);
                ans %= m;
            }
        }
        
        cout << ans % m << nl;
        return 0;
    }

    cout << 0 << nl;

    return 0;
}