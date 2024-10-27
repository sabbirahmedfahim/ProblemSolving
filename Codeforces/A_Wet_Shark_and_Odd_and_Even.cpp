#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n; cin >> n;
    vector<ll> v(n);
    ll mnOdd = 1e9;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>> v[i];
        sum += v[i];
        if(v[i]%2) 
        {
            mnOdd = min(mnOdd, v[i]);
        }
    }
    cout << ((sum%2)? sum - mnOdd : sum) << nl;
    
    return 0;
}