#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, goods; string s; cin >> n >> goods >> s;

    int zero = count(all(s), '0');
    int one = count(all(s), '1');

    if((zero / 2 + one / 2) < goods)
    {
        cout << "NO" << nl; return;
    }

    int bads = n / 2 - goods;
    if(min(zero, one) < bads)
    {
        cout << "NO" << nl; return;
    }
    
    zero -= bads; one -= bads;

    if(zero % 2 == 0 && one % 2 == 0) cout << "YES" << nl;
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