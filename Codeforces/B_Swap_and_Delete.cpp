// question vul porsi
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    int one = count(all(s), '1'), zero = count(all(s), '0');

    int cost = s.size();
    for(auto e : s)
    {
        if(e == '1' && zero) zero--, cost--;
        else if(e == '0' && one) one--, cost--;
        else break;
    }

    cout << cost << nl;
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