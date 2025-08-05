#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;

    if(n%2 == 0)
    {
        if(k > n) k %= n;

        if((n - k) == 0) cout << n << nl;
        else cout << n - k << nl;

        cerr << k << nl;
        // return;
    }

    // n is odd, interfare will be happened surely 
    int kombe = k/n;
    k %= n;
    cerr << kombe + k << nl;
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