#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    priority_queue<ll> pq;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll data; cin >> data;
        if(data == 0 && !pq.empty()) 
        {
            sum += pq.top();
            pq.pop();
        }
        else pq.push(data);
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
