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

    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        input(v);
        vector<ll> v2 = v;
        sort(v2.begin(), v2.end());
        if(v == v2 || k > 1) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}
