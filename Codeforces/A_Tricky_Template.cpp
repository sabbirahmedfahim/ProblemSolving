#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string a, b, c; cin >> n >> a >> b >> c;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != c[i] && b[i] != c[i])
        {
            cout << "YES" << nl; return;
        }
    }
    cout << "NO" << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}