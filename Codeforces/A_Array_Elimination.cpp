// used test cases
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
    vector<int> bits(30);

    for (int i = 0; i < n; i++)
    {
        for (int bit = 0; bit < 30; bit++)
        {
            bits[bit] += (a[i] >> bit) & 1;
        }
    }
    
    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        bool ok = true;
        for (int bit = 0; bit < 30; bit++)
        {
            if(bits[bit] % i != 0) ok = false;
        }

        if(ok) res.push_back(i);
    }
    
    print(res);
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