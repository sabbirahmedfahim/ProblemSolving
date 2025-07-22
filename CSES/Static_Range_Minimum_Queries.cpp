#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int blockSz = sqrtl(n) + 1;
    vector<int> block(blockSz, 1E9);
    for (int i = 0; i < n; i++)
    {
        block[i / blockSz] = min(block[i / blockSz], a[i]);
    }

    while (q--) // O(q * sqrt(n))
    {
        int l, r; cin >> l >> r;
        l--, r--;

        int mn = 1E9;
        while (l <= r) // O(sqrt(n))
        {
            if(l % blockSz == 0 && l + blockSz - 1 <= r)
            {
              mn = min(mn, block[l / blockSz]);
              l += blockSz;
            }
            else 
            {
                mn = min(mn, a[l]);
                l++;
            }
       }

       cout << mn << nl;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}