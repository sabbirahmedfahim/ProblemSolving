#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    deque<char> dq;
    for(auto e : s) dq.push_back(e);

    while (!dq.empty() && dq.size() > 1)
    {
        if(dq.front() != dq.back())
        {
            dq.pop_front();
            dq.pop_back();
        } 
        else break;
    }

    cout << dq.size() << nl;
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