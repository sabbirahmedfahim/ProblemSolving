#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e7 + 9;

vector<bool> isPrime(N, true);
// using bitset you can solve upto around N = 10^8 in 1s
// const int N = 1E8 + 5; bitset<N> isPrime; // to have O(N/64) memory complexity

void sieve() 
{
    // isPrime.set(); // sets all bits to true
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; i++) 
    {
        if (isPrime[i]) 
        {
            for (int j = i * i; j < N; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }
}

struct ST 
{
    ll t[4 * N];

    auto merge(auto &l, auto &r) // Change this function
    { 
        return l + r;
    }
    void build(int node, int st, int en, vector<ll> &a) // O(N)
    { 
        if (st == en) 
        {
            if(isPrime[a[st]]) t[node] = 1;
            else t[node] = 0;
            // t[node] = a[st]; 
            return;
        }
        int mid = (st + en) >> 1;
        build(node << 1, st, mid, a);         // node << 1     --> 2 * node
        build(node << 1 | 1, mid + 1, en, a); // node << 1 | 1 --> 2 * node + 1
        // Merging left and right portion
        t[node] = merge(t[node << 1], t[node << 1 | 1]);
        return;
    }
    void update(int node, int st, int en, int idx, ll data) // O(log n)
    {
        if (st == en) 
        {
            if(isPrime[data]) t[node] = 1;
            else t[node] = 0;

            // t[node] = data;
            return;
        }
        int mid = (st + en) >> 1;
        if (idx <= mid) update(node << 1, st, mid, idx, data);
        else update(node << 1 | 1, mid + 1, en, idx, data);
        // Merging left and right portion
        t[node] = merge(t[node << 1], t[node << 1 | 1]);
        return;
    }
    ll query(int node, int st, int en, int l, int r) // O(log n)
    { 
        if (st > r || en < l) // No overlapping and out of range
        { 
            return 0; // <== careful 
            /*
            min: return LLONG_MAX •	max: return LLONG_MIN •	XOR: return 0
            */
        }
        if (l <= st && en <= r) // Complete overlapped (l-r in range)
        { 
            return t[node];
        }
        
        // Partial overlapping
        int mid = (st + en) >> 1;
        auto Left = query(node << 1, st, mid, l, r);
        auto Right = query(node << 1 | 1, mid + 1, en, l, r);
        return merge(Left, Right);
    }
} st;

void solve() 
{
    ll n, q;
    cin >> n;
    vector<ll> a(n + 1); // 1-based index
    for (int i = 1; i <= n; i++) cin >> a[i];

    st.build(1, 1, n, a); // Creating Segment tree
    cin >> q;
    while (q--) 
    {
        int type; cin >> type;
        if (type == 1) 
        {
            int l, r; cin >> l >> r; 
            cout << st.query(1, 1, n, l, r) << endl;
        }
        else 
        {
            int idx; ll data; cin >> idx >> data;
            st.update(1, 1, n, idx, data);
        }
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    sieve();

    solve();

    return 0;
}