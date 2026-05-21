// resolved from the TLE Eliminators
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; // safer against overflow
}
void solve(int t)
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int x = __gcd(a[i - 1], a[i]), y = __gcd(a[i], a[i + 1]);

        int loshagu = LCM(x, y);

        if(loshagu < a[i]) cnt++; // basically we're checking factors of a[i - 1], a[i + 1] remains 
    }
    
    if(n >= 3)
    {
        if(__gcd(a[0], a[1]) != a[0]) cnt++;
        if(__gcd(a[n - 2], a[n - 1]) != a[n - 1]) cnt++;
    }
    if(n == 2)
    {
        if(__gcd(a.front(), a.back()) < min(a.front(), a.back())) cnt += 2; // edge case that i missed :)
        else if(a.front() != a.back()) cnt++;
    }

    cout << cnt << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve(t);
    }

    return 0;
}