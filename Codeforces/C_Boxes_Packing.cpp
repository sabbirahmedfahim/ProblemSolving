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
    input(v);
    sort(v.begin(), v.end());
    int mx = v[n-1];
    int cnt = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i] != mx) break;
        cnt++;
    }
    cout << cnt << nl;

    return 0;
}