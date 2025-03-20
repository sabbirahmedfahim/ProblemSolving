// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(n), b(n); 
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int radii = *max_element(all(b));

    int cnt = 0;
    for (int i = -300; i < 300; i++)
    {
        for (int j = -300; j < 300; j++)
        {
            if(((i*i)+(j*j)) <= radii * radii) cnt++;
        }
    }
    cout << cnt << nl;
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
