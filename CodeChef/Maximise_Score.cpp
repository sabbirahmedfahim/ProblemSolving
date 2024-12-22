#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    int mn = min(abs(v.front()-v[1]), abs(v.back()-v[n-2]));
    int mx = 1E6;
    for (int i = 1; i < n-1; i++)
    {
        mx = max(abs(v[i]-v[i-1]), abs(v[i]-v[i+1]));
        mn = min(mn, mx);
    }
    cout << mn << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}