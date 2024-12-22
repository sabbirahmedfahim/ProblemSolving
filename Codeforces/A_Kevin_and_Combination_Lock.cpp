#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll x; cin >> x;
    if(x < 33) // edge case
    {
        cout << "NO" << nl; return;
    }

    if(x%33 == 0 && x >= 33) cout << "YES" << nl;
    else // working on it
    {
        cout << "NO" << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}