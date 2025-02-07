#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    for (int mask = 0; mask < (1<<n); mask++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            // if((mask >> k) & 1) cout << 1 << " ";
            // else cout << 0 << " ";
            if((mask >> k) & 1) sum -= v[k];
            else sum += v[k];
        }
        if(sum % 360 == 0)
        {
            cout << "YES" << nl; return 0;
        }
    }
    
    cout << "NO" << nl;

    return 0;
}