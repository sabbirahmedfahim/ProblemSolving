#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    int mx = *max_element(all(a));

    ll res = 0;
    for (int i = 1; i <= n-2; i++)
    {
        for (int j = i + 1; j <= n-1; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                ll sum = a[i] + a[j] + a[k];
                // cout<< a[i] << " " << a[j] << " " << a[k] << " : " << sum <<nl;
                if(k == n) sum -= mx;
                // cout<< i << " " << j << " " << k << " : " << sum << nl;
                if(sum > mx) res++;
            }
        }
    }
    
    cout << res << nl;
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