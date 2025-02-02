// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
only squares of prime numbers are T-primes
*/
const int N = 1E6;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<ll> v(n); for(auto &c : v) cin >> c;

    bool comp[N+1] = {0};
    for (ll i = 2; i <= N; i++)
    {
        if(comp[i]) continue;
        
        for (int j = i+i; j <= N; j+=i)
        {
            comp[j] = true;
        }
    }

    comp[1] = true; // because 1 is a non-prime number

    for(auto data : v)
    {
        ll val = data; val = sqrt(val); val = val*val;
        if(val != data) cout << "NO" << nl;
        else 
        {
            val = sqrt(data);
            if(!comp[val]) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }

    return 0;
}