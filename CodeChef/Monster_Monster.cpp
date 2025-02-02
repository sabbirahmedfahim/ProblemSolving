#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x; cin >> n >> x; deque<ll> dq(n); for(auto &e : dq) cin >> e;

    sort(all(dq)); reverse(all(dq));
    // print(dq);

    ll candidateAns = dq.front(); dq.pop_front();
    ll tmp = n-1, kotoBar = 1;
    while (tmp--)
    {
        candidateAns = max(candidateAns, dq.front() + (x*kotoBar));
        kotoBar++;
        dq.pop_front();
    }
    cout << candidateAns << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}