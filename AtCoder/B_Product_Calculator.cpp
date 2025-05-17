// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, k; cin >> n >> k;
    vector<ll> a(n); for(auto &e : a) cin >> e;

    ll product = 1ll;
    for(auto e : a) 
    {
        product *= 1ll * e;

        ll tmp = product;
        int cnt = 0;
        while (tmp)
        {
            cnt++;
            tmp /= 10;
        }

        if(cnt > k) product = 1;
    }

    cout << product << nl;

    return 0;
}