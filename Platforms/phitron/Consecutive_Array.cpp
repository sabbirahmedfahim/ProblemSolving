#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    sort(v.begin(), v.end());
    int mx = 0;
    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]+1 == v[i+1]) cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    if(mx) mx++;
    // cout << n - mx << nl;
    cout << (n-mx)+1 << nl;
//     if(n-mx%2) cout <<  << nl;
//     else cout << n-mx << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}