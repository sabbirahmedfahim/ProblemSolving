#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k; // k is an odd number
    ll tmp = k;


    if(n == k)
    {
        cout << 1 << nl; return;
    }

    ll cnt = 0;

    if(n & 1)
    {
        cnt++; 
        n -= k;
    }

    k--;

    while (n != 0)
    {
        cnt += n/k;

        n = n%k;
        int l = 1, r = tmp, res = -1;
        while (l <= r)
        {
            int mid = l + (r-l)/2;
            if(n%mid == 0)
            {
                res = mid; 
                l = mid + 1;
            }
            else if(n < mid) r = mid - 1;
            else l = mid + 1;
        }
        k = res;

        // k -= 2; // tle for this
        
    }
    
    cout << cnt << nl;
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