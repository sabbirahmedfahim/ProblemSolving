// codeforces solution (accepted)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll a, b; cin >> a >> b;
    if(b == 1) cout << "NO" << nl;
    else
    {
        cout << "YES" << nl;
        cout << a << " " << a * b << " " << a * (b+1) << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}