// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int q, s, m; cin >> q >> s >> m;

    int cnt = 0, mx = 0, i = 0;
    while (q--)
    {
        int l, r; cin >> l >> r; 
        cnt = (l-i);    
        i = r;
        mx = max(mx, cnt);
    }

    cnt = m-i;
    mx = max(mx, cnt);
    if(mx >= s) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}