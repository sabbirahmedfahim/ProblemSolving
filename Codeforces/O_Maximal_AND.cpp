#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; vector<int> v(n); 

    vector<int> bits(31, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int mask = 0; mask < 31; mask++)
        {
            if((v[i]>>mask) & 1) bits[mask]++;
        }
    }

    // reverse(all(bits));
    // print(bits);
    int ans = 0;
    for (int mask = 30; mask >= 0; mask--)
    {
        int need = n - bits[mask];
        if(k >= need)
        {
            ans += (1<<mask);
            k -= need;
        }
    }
    cout << ans << nl;
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