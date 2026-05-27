#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, x, y; cin >> n >> x >> y;
    vector<int> v(n); for(auto &data : v) cin >> data;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        v[i] = min(v[i]*x, y);
        sum += v[i];
    }
    cout << sum << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}