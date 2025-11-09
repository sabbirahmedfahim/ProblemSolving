// resolved from the editorial (good to read...)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
set<int> OK;
void preCalc()
{
    for (ll i = 2; i <= 1E3; i++) // 1E3 * 1E3 = 1E6
    {
        ll data = i + 1, curr = i;
        for (ll j = 0; j < 20; j++) // 20 is taken from the editorial
        {
            curr *= i;
            data += curr;
            OK.insert(data);

            if(data > 1E6) break;
        }
    }
}
void solve()
{
    int n; cin >> n;

    if(OK.count(n)) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preCalc();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}