// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> x(n), y(n), z; 
    for(auto &data : x) cin >> data;
    for(auto &data : y) cin >> data;
    for (int i = 0; i < n; i++)
    {
        z.push_back(y[i] - x[i]);
    }
    sort(z.rbegin(), z.rend());
    // print(z);

    int cnt = 0;
    for (int i = 0, j = n-1; i < n; i++)
    {
        while (j > i && z[i] + z[j] < 0) j--;
        if(i >= j) break;
        cnt++, j--;
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}