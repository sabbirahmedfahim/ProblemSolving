#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string x = s, y = s; sort(all(x)); sort(all(y)); reverse(all(y));
    if(x == y)
    {
        cout << "NO" << nl; return;
    }

    if(k == 0)
    {
        string arektaS = s; reverse(all(arektaS));
        // cout << s << " " << arektaS << nl;
        if(s >= arektaS) cout << "NO" << nl;
        else cout << "YES" << nl;

        return;
    }

    cout << "YES" << nl; 
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