// resolved from the editorial 
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const ll N = 2E5 + 5, MOD = 998244353;
ll fact[N + 1], factInv[N + 1];
ll Pow(ll a, ll b) // O(log b)
{
    ll ans = 1 % MOD;
    a %= MOD;
    if (a < 0) a += MOD;
    while (b) 
    {
        if (b & 1) ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
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
ll nPr(ll n, ll r) // nPr = nCr * r!
{
    if(n < r or n < 0 or r < 0) return 0;
    return (fact[n] * factInv[n - r]) % MOD;
}

void solve()
{
    string s; cin >> s;

    ll tot_op = 0, totWays = 1;
    vector<ll> ways;
    for (int i = 0; i < s.size(); )
    {
        ll cnt = 1;
        char ch = s[i];
        i++;
        while (i < s.size() && s[i] == ch)
        {
            cnt++; i++;
        }
        if(cnt > 1)
        {
            // cerr << cnt << nl;
            tot_op += cnt - 1;
            ways.push_back(cnt);
        }
    }

    // total ways is the product of all block sizes (its very much important to understand)
    for (int i = 0; i < ways.size(); i++)
    {
        totWays = (totWays * ways[i]) % MOD;
    }

    totWays = (nPr(tot_op, tot_op) * totWays) % MOD; // == (fact[tot_op] * totWays)
    /*
    Learning --> nPr(n, n) = n! 
    */

    cout << tot_op << " " << max(1ll, totWays) << nl;
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