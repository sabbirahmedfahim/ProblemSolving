#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    if(n%2 == 0)
    {
        if(n/2 == k) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    else 
    {
        if((((n/2)+1) == k) || (n/2) == k ) cout << "YES" <<nl;
        else cout << "NO"<<nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}