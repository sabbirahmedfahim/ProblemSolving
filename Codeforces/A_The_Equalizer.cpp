#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k ; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int sum = accumulate(all(a), 0);

    if(sum & 1) cout << "YES" << nl;
    else if(n & 1) 
    {
        if(k % 2 == 0) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    else cout << "YES" << nl;
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