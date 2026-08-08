#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));

    int mx = 0;
    for (int j = 1; j < n; j++)
    {
        for (int k = 2; k * k <= a[j]; k++)
        {
            if(a[j] % k == 0)
            {
                int prev = a[0] + a[j], now = (a[j] / k) + (a[0] * k);
                mx = max(mx, prev - now);
                
                prev = a[0] + a[j], now = (a[j] / (a[j] / k)) + (a[0] * (a[j] / k));
                mx = max(mx, prev - now);
            }
        }
    }
    
    int sum = accumulate(all(a), 0);
    // cerr << sum;

    cout << sum - mx << nl;

    return 0;
}