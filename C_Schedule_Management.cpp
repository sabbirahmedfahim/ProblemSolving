#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int workers, tasks; cin >> workers >> tasks;
    vector<int> a(tasks);
    for(auto &e : a) cin >> e;

    auto canWePlace = [&](int mid) 
    {
        vector<int> freq(tasks + 1, 0);
        int done = 0, rest = 0, need = mid;
        for (int i = 0; i < tasks; i++)
        {
            freq[a[i]]++;
            if(freq[a[i]] <= mid) done++;
            else need--;
        }
        
        return done >= need;
    };

    int hi = tasks, lo = 1, res = -1;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(canWePlace(mid))
        {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }

    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}