#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 5E5 + 7;
const int MOD = 1E8 + 7;
int fibo[N];
void preCalc()
{
    fibo[0] = 0, fibo[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fibo[i] = ((fibo[i - 2] % MOD) + (fibo[i - 1] % MOD)) % MOD;
    }
}
void solve()
{
    int n; cin >> n;

    cout << fibo[n] << nl;
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