// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
simple observation >__<
*/
void solve()
{
    int n; string s; cin >> n >> s;
    int odd = 0, even = 0; 
    for(auto data : s) (data == '1')? odd++ : even++;
    if(odd == 0 || even == 0) cout << n << nl;
    else cout << 1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}