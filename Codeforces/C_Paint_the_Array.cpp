#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> a(n); for(auto &e : a) cin >> e;

    ll GCD_1 = a[0], GCD_2 = a[1];
    for (int i = 0; i < n; i++)
    {
        if(i & 1) GCD_2 = __gcd(GCD_2, a[i]);
        else GCD_1 = __gcd(GCD_1, a[i]);
    }
    
    bool isNotMatch_1 = true, isNotMatch_2 = true;
    for (int i = 0; i < n; i++)
    {
        if(i & 1) 
        {
            if(a[i] % GCD_1 == 0) isNotMatch_1 = false;
        }
        else 
        {
            if(a[i] % GCD_2 == 0) isNotMatch_2 = false;
        }
    }

    if(isNotMatch_1) cout << GCD_1 << nl;
    else if(isNotMatch_2) cout << GCD_2 << nl;
    else cout << 0 << nl;
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