#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    int blockSz = sqrtl(n) + 1;
    // vector<ll> block(blockSz);
    vector<ll> arektaBlock(blockSz);
    // vector<map<ll, ll>> block(blockSz);
    map<ll, set<ll>> block;
    for (int i = 0; i < n; i++)
    {
        // block[i / blockSz] += a[i];
        if(!block[i / blockSz].count(a[i]) && a[i] % 3 == 0) 
        {
            block[i / blockSz].insert(a[i]);
            arektaBlock[i / blockSz] += a[i];
        }
    }

    while (q--) // O(q * sqrt(n))
    {
        int type; cin >> type;

        if(type == 0)
        {
            int idx; ll data; cin >> idx >> data; idx--;
            if(block[idx / blockSz].count(a[idx])) 
            {
                block[idx / blockSz].erase(a[idx]);
                arektaBlock[idx / blockSz] -= a[idx];
            }
            if(!block[idx / blockSz].count(data) && data % 3 == 0) 
            {
                block[idx / blockSz].insert(data);
                arektaBlock[idx / blockSz] += data;
            }

            a[idx] = data;
        }
        else 
        {
            int l, r; cin >> l >> r; l--, r--;

            ll sum = 0;
            set<ll> rem;
            while (l <= r) // O(sqrt(n))
            {
                if(l % blockSz == 0 && l + blockSz - 1 <= r)
                {
                    sum += arektaBlock[l / blockSz];
                    for(auto e : block[l / blockSz])
                    {
                        rem.insert(e);
                    }
                    l += blockSz;
                }
                else 
                {
                    if(!rem.count(a[l]) && a[l] % 3 == 0) sum += a[l];
                    rem.insert(a[l]);
                    l++;
                }
            }

            cout << sum << nl;
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}