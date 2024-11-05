#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    ll n, x; cin >> n >> x;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        if(data != x) v.push_back(data);
    }
    print(v);

    return 0;
}