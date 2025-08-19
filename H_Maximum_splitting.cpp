// used test case
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void solve()
{
    int n; cin >> n;

    if(n <= 3)
    {
        cout << -1 << nl; return;
    }

    int tot_div = n / 4;
    if(n % 4 != 0)
    {
        int extra = n % 4;
        int data = 4 + extra;
        if(isPrime(data)) tot_div--;
    }

    cout << tot_div << nl;
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