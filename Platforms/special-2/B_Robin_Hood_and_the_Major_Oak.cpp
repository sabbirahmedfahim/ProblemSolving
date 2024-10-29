#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n, k, ans = 0;
    cin >> n >> k;
    if(n%2 == 0)
    {
        ans = k/2; // why??
    }
    else 
    {
        ans = ceil(1.0 * k / 2);
    }
    cout << (ans%2 == 0 ? "YES" : "NO") << nl;
}
int main()
{
    int t; cin >> t;
    while (t--) solve();
 
    return 0;
}