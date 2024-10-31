#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    int odd = 0, even = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0 && i%2 == 0) even++;
        else if(n%i == 0 && i%2 != 0) odd++;
    }
    if(even > odd) cout << 1 << nl;
    else if(even == odd) cout << 0 << nl;
    else cout << -1 << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}