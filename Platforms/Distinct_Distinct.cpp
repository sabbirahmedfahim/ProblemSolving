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

    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0) 
        {
            cnt++;
            if(i != n/i) cnt++;
        }
    }

    cout << cnt << nl;

    return 0;
}