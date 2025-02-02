// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
   b - a = c - b
=> a = 2b - c
=> 2b = a + c
=> c = 2b - a
*/
void solve()
{
    int a, b, c; cin >> a >> b >> c;
    if((a + c) % (2*b) == 0) cout << "YES" << nl;
    else if((2*b - c) > 0 && (2*b - c)%a == 0) cout << "YES" << nl;
    else if((2*b - a) > 0 && (2*b - a)%c == 0) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}