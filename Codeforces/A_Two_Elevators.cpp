#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
For the second elevator -> first, move the |b-c| distance, then move from c to 1
*/
void solve()
{
    ll a, b, c; cin >> a >> b >> c;
    
    if(a-1 == abs(b-c) + (c-1)) cout << 3 << nl;
    else if(a-1 < abs(b-c) + (c-1)) cout << 1 << nl;
    else cout << 2 << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}