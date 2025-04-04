#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int MOD = 998244353;
ll Pow(ll x, ll y)
{
    ll ans = 1;
    while(y)
    {
        // if(y & 1) ans *= x;
        if(y & 1) ans = (ans * x) % MOD; // if MOD is given

        y >>= 1;
        // x *= x;
        x = (x * x) % MOD; // if MOD is given
    }

    return ans;
}
void solve()
{
    int n; cin >> n;

    ll res = pow(2, n-2) + pow(2, n-1);

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


// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define all(c) c.begin(),c.end()
// #define print(c) for(auto e : c) cout << e << " "; cout << nl
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     for (int i = 1; i <= 10; i++)
//     {
//         ll data = pow(2, i-1);
//         cout << data << " ";
//     }


//     return 0;
// }