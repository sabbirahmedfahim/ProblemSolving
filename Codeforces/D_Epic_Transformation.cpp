#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll data; cin >> data;
        mp[data]++;
    }

    priority_queue<ll> pq; // max heap
    for(auto [key, val] : mp) pq.push(val);

    while (!pq.empty())
    {
        if(pq.size() < 2) break;
        ll x, y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        x--, y--;
        if(x >= 1) pq.push(x); // value will be pushed again in the priority queue 
        if(y >= 1) pq.push(y); // value will be pushed again in the priority queue 
    }

    ll ans = 0;
    while (!pq.empty()) // *** v.v.i
    {
        ans += pq.top();
        pq.pop();
    }
    
    cout << ans << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}