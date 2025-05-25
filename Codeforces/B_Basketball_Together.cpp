#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
note that sum should be strictly greater than the target
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, target; cin >> n >> target;
    vector<ll> a(n); for(auto &e : a) cin >> e;
    sort(all(a)); reverse(all(a));

    ll have = n;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(have == 0) break;

        int hi = have, lo = 1, kotoNibo = -1;
        while (hi >= lo)
        {
            int mid = lo + (hi-lo)/2;
            if(a[i] * mid > target) 
            {
                kotoNibo = mid; 
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        if(kotoNibo == -1) break;
        else cnt++, have -= kotoNibo;
        // cout << "#" << kotoNibo << nl;
    }
    
    cout << cnt << nl;

    return 0;
}