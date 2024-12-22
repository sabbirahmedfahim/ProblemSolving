// resolved

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int x, y, k; cin >> x >> y >> k; // k remains unused
    cout << "0 0 " << min(x,y) << " " << min(x, y) << nl;
    cout << "0 " << min(x, y) << " " << min(x,y) << " 0" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}