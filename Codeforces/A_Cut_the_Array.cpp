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

    int sum = accumulate(all(a), 0);

    if(a[0] % 3 == a[n - 1] % 3) // all same parity
    {
        if(a[0] % 3 == 0 && a[n - 1] % 3 == 0 && (sum - a[0] - a[n - 1]) % 3 == 0) cout << 1 << " " << n - 1 << nl;
        else if(a[0] % 3 == 1 && a[n - 1] % 3 == 1 && (sum - a[0] - a[n - 1]) % 3 == 1) cout << 1 << " " << n - 1 << nl;
        else if(a[0] % 3 == 2 && a[n - 1] % 3 == 2 && (sum - a[0] - a[n - 1]) % 3 == 2) cout << 1 << " " << n - 1 << nl;
        else cout << 0 << " " << 0 << nl;
    }
    else 
    {
        // six possible combinations
        /*
        0 1 2
        0 2 1
        1 0 2
        1 2 0
        2 0 1
        2 1 0
        */

        if(a[0] % 3 == 0 && a[n - 1] % 3 == 1 && (sum - a[0] - a[n - 1]) % 3 == 2) cout << 1 << " " << n - 1 << nl;
        else if(a[0] % 3 == 0 && a[n - 1] % 3 == 2 && (sum - a[0] - a[n - 1]) % 3 == 1) cout << 1 << " " << n - 1 << nl;
        else if(a[0] % 3 == 1 && a[n - 1] % 3 == 0 && (sum - a[0] - a[n - 1]) % 3 == 2) cout << 1 << " " << n - 1 << nl;
        else if(a[0] % 3 == 1 && a[n - 1] % 3 == 2 && (sum - a[0] - a[n - 1]) % 3 == 0) cout << 1 << " " << n - 1 << nl;
        else if(a[0] % 3 == 2 && a[n - 1] % 3 == 0 && (sum - a[0] - a[n - 1]) % 3 == 1) cout << 1 << " " << n - 1 << nl;
        else if(a[0] % 3 == 2 && a[n - 1] % 3 == 1 && (sum - a[0] - a[n - 1]) % 3 == 0) cout << 1 << " " << n - 1 << nl;
        else cout << 0 << " " << 0 << nl;
    }
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