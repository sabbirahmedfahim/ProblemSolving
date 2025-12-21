#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; // safer against overflow
}
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void test(int n)
{
    int mn = 1E9;
    // int n; cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x = i, y = n - i;
        // cout << LCM(x, y) << nl;
        // if(LCM(x, y) == 6) cout << x << " : " << y << nl;
        mn = min(mn, LCM(x, y));
    }
    cout << mn << nl;
}
void solve()
{
    int n; cin >> n;
    // test(n);
    
    if(isPrime(n)) // ok i guess
    {
        cout << 1 << " " << n - 1 << nl;
        return;
    }

    if(n % 2 == 0)
    {
        cout << n/2 << " " << n/2 << nl;
        return;
    }

    int mx = 1;
    for (int i = 2; i * i <= n; i++) // searching largest multiple
    {
        if(n % i == 0)
        {
            mx = max(mx, max(i, n / i));
        }
    }

    cout << mx << " " << (n - mx) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}