#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
2: remove either the top or bottom card. SURE REMOVE
*/
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    
    int topTheke = 0, bottomTheke = 0, maybeTheke = 0;
    for(auto e : s)
    {
        if(e == '0') topTheke++;
        else if(e == '1') bottomTheke++;
        else maybeTheke++;
    }

    // cerr << topTheke << " : " << bottomTheke << " : " << maybeTheke << nl;
    for (int i = 1; i <= n; i++)
    {
        if(i <= topTheke || (n - i + 1) <= bottomTheke) cout << '-';
        else if((topTheke + bottomTheke + maybeTheke) == n) cout << '-';
        else if(i <= (topTheke + maybeTheke) || (n - i + 1) <= (bottomTheke + maybeTheke)) cout << '?';
        else cout << '+';
    }
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