// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, c; cin >> a >> b >> c;

    // for a
    if(b == c) cout << 1 << " ";
    else if(abs(b-c)%2 == 0) cout << 1 << " ";
    else cout << 0 << " ";

    // for b
    if(a == c) cout << 1 << " ";
    else if(abs(a-c)%2 == 0) cout << 1 << " ";
    else cout << 0 << " "; 

    // for c
    if(b == a) cout << 1 << " ";
    else if(abs(b-a)%2 == 0) cout << 1 << " ";
    else cout << 0 << " ";  

    cout << nl;
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