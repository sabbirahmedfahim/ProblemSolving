#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, m; cin >> n >> m;
    vector<ll> a(n); for(auto &e : a) cin >> e;

    set<ll> free, trackPrev;
    ll tot_cost = 0;
    while (m--)
    {
        ll x, y; cin >> x >> y;

        if(trackPrev.count(x));
        else tot_cost += a[x-1];
        trackPrev.insert(y);

        free.insert(x);
        free.insert(y);
    }

    for (int i = 0; i < n; i++)
    {
        ll data = i+1;
        if(!free.count(data)) tot_cost += a[i];
    }
    // print(trackPrev);
    
    cout << tot_cost << nl;

    return 0;
}