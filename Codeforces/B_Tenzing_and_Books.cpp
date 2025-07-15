#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n), b(n), c(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    for(auto &e : c) cin >> e;

    int val = 0;
    vector<int> bits(30), need(30);
    for (int bit = 0; bit < 30; bit++)
    {
        if((x >> bit) & 1) bits[bit] = 1;
    }
    // print(bits);

    for (int i = 0; i < n; i++)
    {
        for (int bit = 0; bit < 30; bit++)
        {
            if((a[i] >> bit) & 1)
            {
                if(bits[bit] == 0) i = n;
            }
        }
        if(i == n) break;

        for (int bit = 0; bit < 30; bit++)
        {
            if((a[i] >> bit) & 1) need[bit] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int bit = 0; bit < 30; bit++)
        {
            if((b[i] >> bit) & 1)
            {
                if(bits[bit] == 0) i = n;
            }
        }
        if(i == n) break;

        for (int bit = 0; bit < 30; bit++)
        {
            if((b[i] >> bit) & 1) need[bit] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int bit = 0; bit < 30; bit++)
        {
            if((c[i] >> bit) & 1)
            {
                if(bits[bit] == 0) i = n;
            }
        }
        if(i == n) break;
        
        for (int bit = 0; bit < 30; bit++)
        {
            if((c[i] >> bit) & 1) need[bit] = 1;
        }
    }

    if(bits == need) cout << "Yes" << nl;
    else cout << "No" << nl;
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