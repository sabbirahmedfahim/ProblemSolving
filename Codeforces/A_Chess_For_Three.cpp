#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y, z; cin >> x >> y >> z;


    int res = 0;
    priority_queue<int> pq;
    if(x) pq.push(x);
    if(y) pq.push(y);
    if(z) pq.push(z);
        
    while (!pq.empty())
    {
        if(pq.size() == 1) break;
        int a = pq.top();
        pq.pop();
        a--;

        int b = pq.top();
        pq.pop();
        b--;

        if(a) pq.push(a);
        if(b) pq.push(b);

        res++;
    }

    if(pq.empty()) cout << res << nl;
    else
    {
        int data = pq.top();
        if(data & 1) cout << -1 << nl;
        else cout << res << nl;
    }
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