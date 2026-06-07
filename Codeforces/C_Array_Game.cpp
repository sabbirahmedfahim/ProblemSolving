#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int ll
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    if(k >= 3) // ok
    {
        cout << 0 << nl; return;
    }

    if(k == 1)
    {
        sort(all(a));
        int ans = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, a[i + 1] - a[i]);
        }
        
        cout << ans << nl;
    }
    
    if(k == 2)
    {
        vector<int> allPossibleAns;
        sort(all(a));
        allPossibleAns.push_back(a[0]); // jodi array smallest value hoy

        vector<int> mins;
        for (int i = 0; i < n - 1; i++)
        {
            mins.push_back(a[i + 1] - a[i]);
            // cerr << a[i] << " " << a[i + 1] << nl;
        }
        sort(all(mins));

        allPossibleAns.push_back(mins.front());

        // print(mins);
        // print(allPossibleAns);
        // cout << nl;

        // binary search ...??
        for (int i = 0; i < n; i++)
        {
            if(a[i] <= (ll)mins.back()) 
            {
                int lo = 0, hi = (ll) mins.size() - 1, res = -1;
                while(lo <= hi)
                {
                    int mid = lo + (hi - lo) / 2ll;
                    if(mins[mid] >= a[i]) 
                    {
                        res = mins[mid];
                        hi = mid - 1;
                    }
                    else lo = mid + 1;
                }

                allPossibleAns.push_back(res - a[i]);
            }
            if(a[i] >= (ll)mins.front()) 
            {
                int lo = 0, hi = mins.size() - 1, res = -1;
                while(lo <= hi)
                {
                    int mid = lo + (hi - lo) / 2ll;
                    if(mins[mid] <= a[i]) 
                    {
                        res = mins[mid];
                        lo = mid + 1;
                    }
                    else hi = mid - 1;
                }
                
                allPossibleAns.push_back(a[i] - res);
            }

            // print(allPossibleAns);
        }
        
        sort(all(allPossibleAns));
        cout << allPossibleAns.front() << nl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}