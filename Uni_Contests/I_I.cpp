#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;

    ll x = -1, y = -1;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            x = i, y = i;
            if(i != n/i) y = n/i;
        }
    }
    
    // cout << x << " " << y << nl;
    cout << x + y - 2 << nl;

    return 0;
}