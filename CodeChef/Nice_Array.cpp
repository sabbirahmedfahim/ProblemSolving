#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    vector<double> v(n); for(auto &data : v) cin >> data;
    
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += floor(v[i]/k);
        sum2 += ceil(v[i]/k);
    }
    for (int i = 0; i < n; i++)
    {
        if(sum2 <= 0) break;
        sum2 -= ceil(v[i]/k);
        sum2 += floor(v[i]/k);
    }
    if(sum1 == 0 || sum2 == 0) cout << "YES" << nl;
    else cout << "NO" <<nl;
    // cout << sum1 << " " << sum2 <<nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
