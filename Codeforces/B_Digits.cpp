// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
ll fact(ll n)
{
    if(n == 0 || n == 1) return 1;
    return n * fact(n-1);
}
void solve()
{
    ll n, d; cin >> n >> d;
    cout << 1 << " ";
    if(n >= 3) cout << 3 << " ";
    else 
    {
        ll x = fact(n);
        if((x*d)%3 == 0) cout << 3 << " ";
    }
    if(d == 5) cout << 5 << " ";
    if(n == 2) 
    {
        if((n*d)%7 == 0) cout << 7 << nl;
    }
    else if(n >= 3) cout << 7 << " ";
    if(n >= 6) cout << 9 << " ";
    else 
    {
        ll x = fact(n);
        if((x*d)%9 == 0) cout << 9 << nl;
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}   
