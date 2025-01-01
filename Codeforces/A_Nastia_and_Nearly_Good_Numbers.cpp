// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll a, b; cin >> a >> b;
    // a * b diye divisible hole good
    // a diye divisible hobe nearly good
    // x + y = z -> exactly one of them is good and the other 2 are nearly good
    
    if(b == 1) // because a*b and a will be same
    {
        cout << "NO" << nl; return;
    }
    cout << "YES" << nl;
    cout << a << " " << a*b << " " << a*(b+1) << nl; // nearly good, good, nearly good
} 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}