// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; deque<ll> dq(n); for(auto &e : dq) cin >> e;
    sort(all(dq));

    while (dq.size() != k)
    {
        ll data = dq.front();
        dq.pop_front(); 
        dq.front() += data;
        sort(all(dq));

        // dq.pop_back();
    }
    print(dq);
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