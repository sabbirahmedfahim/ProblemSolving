// upsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
Strategy:
If members of the same family sit together, then both(2 person) are happy.
If a row is empty and only one person sits there, they are also happy.
*/
void solve()
{
    int n, r; cin >> n >> r;
    vector<int> v(n);
    for(auto &data : v) cin >> data;

    int ans = 0, remaining_members = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (v[i]/2)*2;
        remaining_members += v[i]%2;
        r -= (v[i]/2);
    }

    if(r > remaining_members) ans += remaining_members;
    else ans += (r*2-remaining_members);

    cout << ans << nl;

}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}