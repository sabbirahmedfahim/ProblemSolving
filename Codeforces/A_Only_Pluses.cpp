#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < 3; i++)
    {
        int data; cin >> data;
        pq.push(data);
    }
    
    for (int i = 0; i < 5; i++)
    {
        int tmp = pq.top();
        pq.pop();
        tmp++;
        pq.push(tmp);
    }
    
    int res = 1;
    while (!pq.empty())
    {
        res *= pq.top();
        pq.pop();
    }
    
    cout << res << nl;
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