#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int x, int y)
{
    return (x * y )/__gcd(x, y);
}
void solve()
{
    int n; cin >> n; 
    vector<int> a(n); for(auto &e : a) cin >> e;

    set<int> s;
    for(auto e : a) s.insert(e);

    cout << s.size() << nl;
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