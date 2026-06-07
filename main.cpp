#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin>>e;

    vector<int> bits(30);
    for(auto e : a)
    {
        for (int bit = 0; bit < 30; bit++)
        {
            bits[bit] ^= (e >> bit) & 1;
        }
    }

    // print(bits);
    int mx = 0;
    for(auto e : a)
    {
        int curr = 0;
        for (int bit = 0; bit < 30; bit++)
        {
            bits[bit] ^= (e >> bit) & 1;
        }
        for (int bit = 0; bit < 30; bit++)
        {
            if(bits[bit]) curr += (1 << bit);
        }

        print(bits);

        mx = max(mx, curr);

        for (int bit = 0; bit < 30; bit++)
        {
            bits[bit] ^= (e >> bit) & 1;
        }
    }

    cout << mx << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}