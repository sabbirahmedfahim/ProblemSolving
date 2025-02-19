// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void doSomeMath()
{
    ll n = 25;
    for (ll i = 0; i < 3; i++)
    {
        cout << n << nl;
        n *= n;
    }
    cout << n << nl; cout << nl;

    n = 25;
    for (ll i = 1; i <= 20; i++)
    {
        cout << i * 25 << nl;
    }
    
}
int mnOps(string lastTwo, string s)
{
    // cout << lastTwo << " " << s << nl;

    char x = lastTwo[0], y = lastTwo[1];
    int cnt = 0;
    char o, p;

    while (!s.empty() && s.back() != y)
    {
        s.pop_back(); cnt++;
    }
    if(!s.empty())  // do not count
    {
        p = s.back(); s.pop_back();
    }

    if(s.empty()) return 1E9;

    while (!s.empty() && s.back() != x)
    {
        s.pop_back(); cnt++;
    }

    if(!s.empty())  // do not count
    {
        o = s.back(); s.pop_back();
    }

    if(p != y || o != x) return 1E9;

    return cnt;
}
void solve()
{
    string s; cin >> s; 

    vector<string> digits = {"00", "25", "50", "75"};
    int ans = 1E9;
    for(auto data : digits)
    {
        int mn = mnOps(data, s);
        ans = min(ans, mn);
        // cout << s << nl;
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        // doSomeMath(); // to understand the pattern
        solve();
    }

    return 0;
}