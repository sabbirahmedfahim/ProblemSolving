// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k; deque<ll> items(n);
    for(auto &data : items) cin >> data;
    sort(all(items));
    // print(items);
    for (int i = 0; i < n && k > 0; i++)
    {
        sort(all(items));
        ll need = items.back() - items.front();
        ll willAdded = min(k, need);
        items.front() = items.front()+ willAdded;
        k -= willAdded;
    }

    sort(items.rbegin(), items.rend());
    // print(items);
    // cout << nl;

    ll akib = 0, sabbir = 0;
    for (int i = 0; i < items.size(); i++)
    {
        if(i%2 == 0) akib += items[i];
        else sabbir += items[i];
    }
    cout << akib - sabbir << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}