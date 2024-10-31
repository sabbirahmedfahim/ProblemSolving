// resolved after getting hints from the editorial but did not understand the question properly
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, a, b; cin >> n >> a >> b;
    if(a+b+2 <= n || a == n && b == n) cout << "Yes" << nl;
    else cout << "No" << nl; 
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}