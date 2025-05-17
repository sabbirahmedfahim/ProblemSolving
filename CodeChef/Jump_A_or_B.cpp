#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    
    ll hi = n, lo = 0, res = -1;
  
    while(lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
        ll x = a*mid, y = b *(n-mid);
        // tot n jumps for sure

        // cout << mid << nl;

        if(x+y == m)
        {
            cout << "Yes" << endl;
            return;
        }
        else if(x+y > m)
        {
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    cout << "No" << endl;
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