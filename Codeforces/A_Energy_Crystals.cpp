#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    vector<int> a(3, 0);
    a[1] = 1, a[2] = 1;

    int res = 2;
    while (1)
    {
        sort(all(a));
        int mn = a[0];

        if(mn * 2 >= n) 
        {
            if(a[0] < n) res++;
            if(a[1] < n) res++;
            if(a[2] < n) res++; 
            cout << res << nl; return;
        }

        int hi = 1E9, lo = 1, nibo = -1;

        while (hi >= lo)
        {
            int mid = lo + (hi-lo)/2;
            if(a[1] >= (a[0] + mid)/2)
            {
                nibo = mid;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }

        a[0] += nibo;
        res++;
    }
    
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