// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    multiset<ll> ml;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data; 
        ml.insert(data);
        sum += data;
    }

    priority_queue<ll> pq;
    pq.push(sum); // sum k push korbo

    while (!pq.empty())
    {
        ll data = pq.top(); // amra ekta niye kaj suru korbo, every time ekta niya kaj korbo
        pq.pop();

        // int x = (data+1)/2, y = data/2;
        
        if(*ml.rbegin() > data) break;
        if(ml.find(data) != ml.end())
        {
            auto it = ml.find(data);
            ml.erase(it);
            // ml.erase(data); // wrong approach, shob similar value delete hoye jacche
        }
        else
        {
            ll x = (data+1)/2, y = data/2;
            pq.push(x); pq.push(y);
        }
    }

    if(ml.empty()) cout << "YES" << nl;
    else cout << "NO" << nl;
    
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