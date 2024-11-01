#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
ll fact(int n)
{
    if(n==0 || n==1) return 1;
    return fact(n-1)*n;
}
void solve()
{
    ll n, d; cin >> n >> d; 
    if(n >= d && n%d == 0) cout << "YES" << nl;
    else if(fact(n)%d == 0) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}