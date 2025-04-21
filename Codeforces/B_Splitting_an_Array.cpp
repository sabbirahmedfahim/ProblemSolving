#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &e : a) cin >> e;
    // sort(all(a)); // sort func call dilam keno -_-
    // print(a);

    auto canWePlace = [&](ll mid)
    {
        ll cur_sum = 0, cnt = 0;
        for (int i = 0; i < n;)
        {
            cur_sum = a[i];
            if(cur_sum > mid) return false;
            i++;
            while (i < n)
            {
                cur_sum += a[i];
                i++;

                if(cur_sum > mid) 
                {
                    i--; 
                    cur_sum -= a[i];
                    break;
                }
            }
            cnt++;
        }
        if(cnt <= k && cur_sum <= mid)
        {
            // cout << cnt << nl; 
            return true;
        }
        else return false;
    };

    ll lo = *max_element(all(a)), hi = accumulate(all(a), 0ll), res = -1;
    // cout << lo << " " << hi << nl;
    while (lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
        if(canWePlace(mid))
        {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    cout << res << nl;

    return 0;
}