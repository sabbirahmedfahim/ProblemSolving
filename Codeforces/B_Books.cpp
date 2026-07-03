#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, time; cin >> n >> time;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    // sort(all(a));

    int mx = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        time -= a[r];

        if(time < 0)
        {
            while (l <= r && time < 0)
            {
                time += a[l];
                l++;
            }
        }

        if(time >= 0) mx = max(mx, r - l + 1);
    }
    

    cout << mx << nl;

    return 0;
}