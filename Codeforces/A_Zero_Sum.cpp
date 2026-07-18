#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int beshi = 0, kom = 0;
    for(auto e : a) 
    {
        if(e == 1) beshi++;
        else kom++;
    }

    while (beshi > kom && beshi >= 2)
    {
        beshi -= 2;
        kom += 2;
    }
    while (kom > beshi && kom >= 2)
    {
        kom -= 2;
        beshi += 2;
    }

    if(beshi == kom) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}