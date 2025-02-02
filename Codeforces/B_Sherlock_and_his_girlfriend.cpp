// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const ll N = 1E5;

void solve()
{
    ll n; cin >> n;

    // composite -> non-prime
    bool comp[N+1] = {0}; // 1-n initially false
    comp[1] = true;

    for(ll i=2; i <= n+1; i++) // i is a number
    {
        if(comp[i]) continue;

        for(ll j=i+i; j<=n+1; j+=i) // j is a multiple of i
        {
            comp[j] = true;
        }
    }

    if(n > 2) cout << 2 << nl;
    else cout << 1 << nl;

    for(ll i = 2; i <= n+1; i++)
    {
        if(comp[i]) cout << 2 << " ";
        else cout << 1 << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve();

    return 0;
}
