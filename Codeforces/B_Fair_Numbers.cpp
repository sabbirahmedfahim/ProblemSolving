#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;

    ll tmp = n, hi = -1;
    while (tmp)
    {
        hi = max(hi, tmp%10);
        tmp /= 10;
    }
    
    // cout << hi << nl;
    vector<int> bits(64, 0);

    for (int i = 0; i < 63; i++)
    {
        if((n >> i) & 1) bits[i] = 0;

        if((1 << i) == hi) 
        {
            
        }
    }
    
    // print(bits);
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