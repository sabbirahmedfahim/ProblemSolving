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
    ll cnt = 0; 
    input(v);
    ll median = 0;
    sort(v.begin(), v.end());
    if(n == 1) 
    {
        cout << 0; return 0;
    }
    else if(n%2 == 1) median = v[n/2];
    else median = (v[n/2] + v[(n+1)/2])/2;
    ll cost = 0;
    for (int i = 0; i < n; i++)
    {
        cost += abs(median-v[i]);
    }
    cout << cost << nl;

    return 0;
}