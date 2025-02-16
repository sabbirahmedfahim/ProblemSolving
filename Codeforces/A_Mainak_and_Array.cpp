// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; deque<int> dq(n); for(auto &e : dq) cin >> e;

    if(n == 1)
    {
        cout << 0 << nl; return;
    }

    int ans = dq.back() - dq.front();

    int x = *max_element(dq.begin()+1, dq.end());
    int y = *min_element(dq.begin(), dq.end()-1);
    // cout << y << nl;
    
    ans = max(ans, x - dq.front());
    ans = max(ans, dq.back() - y);

    for (int i = 0; i < n-1; i++)
    {
        ans = max(ans, dq[i]-dq[i+1]);
    }
    
    cout << ans << nl;
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