// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, queries; cin >> n >> queries;

    map<int, int> karShateKe;
    while (queries--)
    {
        int L, R; cin >> L >> R;

        int l = min(L, R), r = max(L, R);
        if(karShateKe.count(r)) karShateKe[r] = max(karShateKe[r], l);
        else karShateKe[r] = l;
    }
    
    int ans = 0, curr = 0, prev = -1;
    for (int i = 1; i <= n; i++)
    {
        if(karShateKe.count(i))
        {
            prev = max(prev, karShateKe[i]);

            curr = i - prev;
            ans += curr;
        }
        else 
        {
            curr++;
            ans += curr;
        }

        // cerr << ans << nl;
    }
    
    cout << ans << nl;
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