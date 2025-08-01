#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

// 0-based indexing, query finds in range [first, last]
#define lg(x) (31 - __builtin_clz(x))
const int N = 3e5 + 7;
const int LOG = lg(N);

struct SparseTable 
{
    ll table[N][LOG + 1];

    ll op(ll p1, ll p2) // Change this function according to the problem.
    {
        return p1 + p2; // <===
    }
    void build(int n, const vector<ll> &a) // O(N * logN)
    { 
        for (int i = 0; i < n; i++) table[i][0] = a[i];

        for (int j = 1; j <= LOG; j++) 
        {
            for (int i = 0; i + (1 << j) <= n; i++) 
            {
                table[i][j] = op(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]); 
            }
        }
    }
    ll queryConstTime(int l, int r) // find Idempotent Operations (Min, Max, GCD, AND, OR) => O(1)
    { 
        int d = lg(r - l + 1);
        return op(table[l][d], table[r - (1 << d) + 1][d]);
    }
    ll queryRange(int l, int r) // find Non-Idempotent Operations (Sum, LCM, XOR) => O(LogN)
    { 
        ll val = 0; // for sum or, xor => val = 0 and lcm => val = 1
        for (int j = LOG; j >= 0; j--) 
        {
            if ((1 << j) <= r - l + 1) 
            {
                val = op(val, table[l][j]);
                l += 1 << j;
            }
        }
        return val;
    }
};
SparseTable spt;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    spt.build(n, a); // <== Sparse Table Build

    while(q--) 
    {
        int l, r; cin >> l >> r;
        --l, --r;
        cout << spt.queryRange(l, r) << nl;
    }

    return 0;
}
// https://www.youtube.com/watch?v=jYSIy65MpGg ***