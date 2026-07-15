#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0 && (a[i] & 1)) odd++; 
        if(i % 2 == 1 && (a[i] % 2 == 0)) even++; 
    }
    
    int ans = n - (odd + even);
    odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0 && (a[i] % 2 == 0)) even++; 
        if(i % 2 == 1 && (a[i] % 2 == 1)) odd++; 
    }

    ans = min(ans, n - (odd + even));

    cout << ans << nl;
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