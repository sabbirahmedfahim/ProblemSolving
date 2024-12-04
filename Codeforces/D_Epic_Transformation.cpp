#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    map<ll, ll> mp;
    while (n--)
    {
        ll data; cin >> data;
        mp[data]++;
    }
    priority_queue<ll> pq;
    for(auto [key, val] : mp) pq.push(val);

    while (!pq.empty())
    {
        if(pq.size() < 2) break;
        ll x, y; 
        x = pq.top(); pq.pop();
        y = pq.top(); pq.pop();
        x--; y--;
        if(x) pq.push(x);
        if(y) pq.push(y);
    }
    
    ll sum = 0;
    while (!pq.empty())
    {
        sum += pq.top(); pq.pop();
    }
    cout << sum << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}