#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
/*
sol approach: 
If n is odd, it can divide itself, so the answer is "yes."
If n is even, we can observe a pattern: powers of 2 do not have odd divisors.
  2      4      6      8      10      12      14
  2^1   2^2    (3)    2^3     (5)     (3)     (7)
*/
void solve()
{
    ll n; cin >> n;
    if(n%2) cout << "YES" << nl;
    else
    {
        int k = 0;
        while (k < 50)
        {
            if(pow(2, k) == n)
            {
                cout << "NO" << nl; return;
            }
            k++;
        }
        cout << "YES" << nl;
    }
}
int main()
{
    int t; cin >> t;
    while (t--) solve();

    return 0;
}