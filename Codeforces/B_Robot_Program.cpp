// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x, k; cin >> n >> x >> k;
    string s; cin >> s;

    // how many time it takes to zero
    ll time = 0;
    for(auto e : s)
    {
        if(e == 'L') x--;
        else x++;
        time++;
        
        if(x == 0) break;
    }
    
    if(k < time || x != 0) cout << 0 << nl;
    else cout << k/time << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}