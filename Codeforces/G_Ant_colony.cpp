// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
// #define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // less_equal for multiset

// 0-based indexing, query finds in range [first, last]
#define lg(x) (31 - __builtin_clz(x))
const int N = 3e5 + 7;
const int LOG = lg(N);

struct SparseTable 
{
    ll table[N][LOG + 1];

    ll op(ll p1, ll p2) // Change this function according to the problem.
    {
        return __gcd(p1, p2); // <===
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
    ll queryIdempotent(int l, int r) // Idempotent Operations (Min, Max, GCD, AND, OR) => O(1)
    { 
        int d = lg(r - l + 1);
        return op(table[l][d], table[r - (1 << d) + 1][d]);
    }
};
SparseTable sptGCD;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    sptGCD.build(n, a); // <== Sparse Table Build

    map<int, pbds<int>> freq; 
    map<int, int> tot_freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]].insert(i);
        tot_freq[a[i]]++;
    }
    
    int q; cin >> q;
    while(q--) 
    {
        int l, r; cin >> l >> r;
        --l, --r;

        /*
        observation 1: (initial thought)
        ekta observation holo, jodi range er min vs gcd same na hoy(both O(1) op, then ans holo full length,
        and only if range min & gcd same hoy, tokon len reduce hobe, akon koto hobe, sheta ber korte hobe
 
        yeah, minimum ta amra ber korte parbo with the help of bs // bs didn't helped me, i know it works, i can't
 
        update: mn ber korte giya mx diye tc solve kore felsi :3
        update 2: got wa
        update 3 : bs er logic vul chilo, i wonder how 26th tc porjonto chole jay WOW
        update 4 : just fixed another logical mistake from bs, but sadly it will not handle TLE
 
        thought for TLE:
        ok no ok no ok no ..... for this type range, worst case O(n) iteration
        */
        /*
        observation 2: (with minimal hints)
        accha ami pbds diye less, greater alada korte parbo. pbds works well !
        */

        int val = sptGCD.queryIdempotent(l, r);
        ll res = tot_freq[val] - freq[val].order_of_key(l); // reduce smaller values
        ll largeValues = tot_freq[val] - freq[val].order_of_key(r + 1);
        res -= largeValues; // reduce large values

        cout << r - l + 1 - res << nl;
    }

    return 0;
}