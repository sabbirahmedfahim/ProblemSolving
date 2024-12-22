#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n), b(n);
    for(auto &data : a) cin >> data;
    for(auto &data : b) cin >> data;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(abs(a[i]-b[i])*2 <= max(a[i], b[i])) ans++;
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}