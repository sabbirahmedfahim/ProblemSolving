#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 3e5 + 9;

struct ST 
{
    ll t[4 * N];

    auto merge(auto &l, auto &r) // Change this function
    { 
        return min(l, r);
    }
    void build(int node, int st, int en, vector<ll> &a) // O(N)
    { 
        if (st == en) 
        {
            t[node] = a[st]; 
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
            t[node] = data;
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
            return LLONG_MAX; // <== careful 
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
struct ST2 
{
    ll t[4 * N];

    auto merge(auto &l, auto &r) // Change this function
    { 
        return max(l, r);
    }
    void build(int node, int st, int en, vector<ll> &a) // O(N)
    { 
        if (st == en) 
        {
            t[node] = a[st]; 
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
            t[node] = data;
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
            return LLONG_MIN; // <== careful 
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
} st2;

void solve() 
{
    ll n, q;
    cin >> n;
    vector<ll> a(n + 1); // 1-based index
    for (int i = 1; i <= n; i++) cin >> a[i];

    st.build(1, 1, n, a); // Creating Segment tree
    st2.build(1, 1, n, a);
    cin >> q;
    while (q--) 
    {
        ll l, r, data; cin >> l >> r >> data;
        ll curr = l;

        ll cnt = 0;
        while (curr <= r)
        {
            if(a[curr] > data)
            {
                ll lo = curr, hi = r, res = -1;
                while (lo <= hi)
                {
                    ll mid = lo + (hi - lo) / 2;
                    // cerr << st.query(1, 1, n, curr, mid) << nl;
                    if(st.query(1, 1, n, curr, mid) > data)
                    {
                        // cerr << "WHat" << nl;
                        res = mid;
                        lo = mid + 1;
                    }
                    else hi = mid - 1;
                }
                cnt += res - curr + 1;
                curr = res + 1;
                // cerr << "Hip" << nl;
            }
            else 
            {
                ll lo = curr, hi = r, res = -1;
                while (lo <= hi)
                {
                    ll mid = lo + (hi - lo) / 2;
                    if(st2.query(1, 1, n, curr, mid) <= data)
                    {
                        res = mid;
                        lo = mid + 1;
                    }
                    else hi = mid - 1;
                }
                curr = res + 1;
                // cerr << res <<nl;
                // cerr << "Hop" << nl;
            }
        }

        cout << cnt << nl;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}