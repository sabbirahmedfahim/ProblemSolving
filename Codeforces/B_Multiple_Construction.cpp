#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> dq;

    if(n == 1)
    {
        cout << 1 << " " << 1 << nl; return;
    }

    for (int i = n; i >= 1; i--)
    {
        dq.push_back(i);
    }
    dq.push_back(n);
    dq.push_back(1);

    for (int i = 2; i <= n - 1; i++)
    {
        dq.push_back(i);
    }
    
    print(dq);
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