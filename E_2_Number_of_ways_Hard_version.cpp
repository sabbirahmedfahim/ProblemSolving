#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const ll N = 2E5, MOD = 1E9 + 7;
ll fact[N + 1], factInv[N + 1];
ll Pow(ll a, ll b) // O(log b)
{
    ll notPick = 1 % MOD;
    a %= MOD;
    if (a < 0) a += MOD;
    while (b) 
    {
        if (b & 1) notPick = (notPick * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return notPick;
}
void build_fact()
{
    fact[0] = fact[1] = 1;
    for (ll i = 2; i <= N; i++) fact[i] = 1ll * (fact[i - 1] * i) % MOD;
    
    factInv[N] = Pow(fact[N], MOD-2);
    for (ll i = N-1; i >= 0; i--) factInv[i] = (factInv[i + 1] * (i + 1)) % MOD;
}
ll nCr(ll n, ll r)
{
    if(n < r or n < 0 or r < 0) return 0;
    return ((fact[n] * factInv[r]) % MOD) * factInv[n - r] % MOD;
}
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int tot_one = 0, tot_zero = 0;
    for(auto e : a)
    {
        if(e == 1) tot_one++;
        else tot_zero++;
    }

    ll notPick = 0;
    ll zeroComb = Pow(2, zero);
    for (int i = 1; i < k; i++)
    {
        notPick += nCr(tot_one, i) * zeroComb;
        notPick %= MOD;
    }

    // if(k > 0)
    // {
    //     notPick *= zeroComb;
    //     if(notPick == 0) notPick += zeroComb - 1;
    //     notPick %= MOD;
    // }

    // cout << Pow(2, n) - 2 - notPick << nl;

    ans *= Pow(2, zero);
    ans %= MOD;

    if(sum >= k) ans += nCr(sum, 0) * (Pow(2, zero) - 1);
    ans %= MOD;

    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    build_fact();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}