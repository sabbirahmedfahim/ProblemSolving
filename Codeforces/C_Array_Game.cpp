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
    sort(all(a));

    if(k >= 3)
    {
        cout << 0 << nl; return;
    }

    if(k == 1)
    {
        int ans = a[0];
        for (int i = 0; i < n - 1; i++) ans = min(ans, a[i + 1] - a[i]);
        cout << ans << nl;
    }
    
    if(k == 2)
    {
        vector<int> allPossibleAns;
        allPossibleAns.push_back(a[0]); // jodi array smallest value hoy

        vector<int> mins;
        for (int i = 0; i < n; i++)
        {
            // mins.push_back(a[i + 1] - a[i]);
            for (int j = 0; j < n; j++)
            {
                if(i == j) continue;

                mins.push_back(abs(a[i] - a[j]));
            }
        }
        sort(all(mins));
        allPossibleAns.push_back(mins.front());
        sort(all(allPossibleAns)); reverse(all(allPossibleAns));

        sort(all(a));
        for (int i = 0; i < a.size(); i++)
        {
            auto it = lower_bound(all(mins), a[i]);

            if(it != mins.end()) allPossibleAns.push_back(abs(*it - a[i]));
        }
        for (int i = 0; i < mins.size(); i++)
        {
            auto it = lower_bound(all(a), mins[i]);

            if(it != a.end()) allPossibleAns.push_back(abs(*it - mins[i]));
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