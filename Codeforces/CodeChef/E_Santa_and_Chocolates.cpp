// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; sum += v[i];
    }
    if(sum < n || sum%n && k == 0) cout << "NO" << nl; // ***
    else cout << "YES" << nl; 
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}