#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, c; cin >> a >> b >> c;

    bool a_turn = false;
    if(c & 1) 
    {
        b--;
        a_turn = true;
    }
    else a--;

    if(a == b)
    {
        if(!a_turn) cout << "First" << nl;
        else cout << "Second" << nl;
        return;
    }

    if(a > b) cout << "First" << nl;
    else cout << "Second" << nl;
    
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