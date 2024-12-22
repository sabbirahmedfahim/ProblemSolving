// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> a(n), b(n); 
    for(auto &data : a) cin >> data;
    for(auto &data : b) cin >> data;
    ll mxDis = 0;
    for (int i = 0; i < n; i++) mxDis = max(mxDis, (a[i]-b[i]));
    
    for (int i = 0; i < n; i++)
    {
        if((a[i] < b[i]) || !(a[i]-mxDis == b[i]) && !(a[i]-mxDis < 0 && b[i] == 0)) 
        {
            cout << "NO" << nl; return;
        }
    }
    cout << "YES" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}