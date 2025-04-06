#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<ll> a(n); // 1E18
    for(auto &e : a) cin >> e;

    sort(all(a));

    ll GCD = 0;
    for (int i = 1; i < n; i++)
    {
        if(a[i]%a[0] == 0)
        {
            GCD = __gcd(GCD, a[i]);
            if(GCD == a[0])
            {
                cout << "Yes" << nl; return;
            }
        }
    }
    
    cout << "No" << nl;
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