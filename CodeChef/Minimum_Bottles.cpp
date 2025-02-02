#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x; cin >> n >> x; deque<ll> dq(n); for(auto &e : dq) cin >> e;
    sort(all(dq));

    ll idx = n-1;
    while (dq.size() > 1 && idx > 0)
    {
        if(dq[idx] != x) 
        {
            ll need = x - dq[idx];
            ll have = dq.front();
            dq[idx] += min(need, have);
            dq.front() -= min(need, have);
        }
        if(dq.front() == 0) 
        {
            dq.pop_front(); idx--;
        }
        else idx--;
        sort(all(dq));
    }
    // print(dq);
    cout << dq.size() << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}