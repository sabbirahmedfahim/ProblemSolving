#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int cntA = count(all(s), 'A');
    if(cntA == n || cntA == 0)
    {
        cout << 0 << nl; return;
    }

    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if(l == -1 && s[i] == 'A') l = i;
        if(s[i] == 'B') r = i;
    }
    
    if(r < l)
    {
        cout << 0 << nl; return;
    }
    cout << r-l << nl;
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