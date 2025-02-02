
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const long long MOD = 1E9 + 7;
const ll n = 1E4;
bool comp[n+1] = {0};
//vector<int> di[n+1];
vector<int> lp(n+1); // lowest prime divisor
void solve()
{
    int N; cin >> N;
    ll fact = 1;
    for(int i=2; i<=N; i++)
    {
        fact = (1ll * fact%MOD * i%MOD) % MOD;
    }

    for(int i=1; i<=n; i++) lp[i] = 0;
    for(int i=2; i <= n; i++) // i is a prime
    {
        if(comp[i]) continue;
        lp[i] = i;

        for(int j=i+i; j<=n; j+=i)
        {
            comp[j] = true;
            if(lp[j] == 0) lp[j] = i; // for lowest prime
        }
    }

    cout << "fact of n: " << fact << nl;

    for(int i=1; i<=10; i++)
    {
        if(lp[i] != 0)
        {
            cout << i << " -> " << lp[i] << nl;
        }
    }
}
void solve2()
{
    int N; cin >> N;

    for(int i=2; i <= n; i++) // i is a prime
    {
        if(comp[i]) continue;
        lp[i] = i;
        for(int j=i+i; j<=n; j+=i)
        {
            comp[j] = true;
            if(lp[j] == 0) lp[j] = i; // for lowest prime
        }
    }
    map<ll,ll> mp;
    for(int i=2; i<=N; i++)
    {
        ll x = i;
        while(x != 1)
        {
            mp[lp[x]]++;
            x /= lp[x];
        }
    }
    ll ans = 1;
    for(auto e:mp) ans *= (e.second+1) , ans %= MOD;
    
    // ans = (ans+MOD)%MOD; // not for the problem, but if we use, if will AC. It handles negative values
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve2();

    return 0;
}

