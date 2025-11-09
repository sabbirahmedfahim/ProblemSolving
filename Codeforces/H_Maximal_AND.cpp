#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> bits(31);
    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bits[i] += (a[j] >> i) & 1;
        }
    }
    
    for (int i = 30; i >= 0; i--)
    {
        int need = n - bits[i];
        if(k >= need) 
        {
            bits[i] = n;
            k -= need;
        }
    }

    ll tot = 0;
    for (int i = 0; i < 31; i++)
    {
        if(bits[i] == n) tot += (1 << i);
    }
    
    cout << tot << nl;
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