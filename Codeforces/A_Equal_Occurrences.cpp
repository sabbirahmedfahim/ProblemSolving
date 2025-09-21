#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> freq;
    for(auto e : a) freq[e]++;

    int res = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int curr = 0;
        for(auto [x, y] : freq)
        {
            if(y >= i) curr += i;
        }

        res = max(res, curr);
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