#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, l, r; cin >> n >> l >> r;

    set<int> GCDS;

    if(r - l + 1 < n)
    {
        cout << "NO" << nl; return;
    }

    for (int i = 1, j = l; j <= r; j++)
    {
        if(!GCDS.count(__gcd(i, j)))
        {
            GCDS.insert(__gcd(i, j)); i++;
        }
        if(GCDS.size() == n) break;
    }
    
    if(GCDS.size() == n)
    {
        cout << "YES" << nl;
        print(GCDS);
    }
    else cout << "NO" << nl;
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