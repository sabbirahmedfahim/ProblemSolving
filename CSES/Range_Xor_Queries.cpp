#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
int l = n << 1;     // left = 2*n
int r = l | 1;      // right = 2*n + 1
*/
const int N = 3e5 + 9;

struct Segment_Tree { // 1-based
    ll t[4 * N];

    auto merge(auto &l, auto &r) { // <= Change this function
        return (l ^ r);
    }
    void build(int node, int st, int en, vector<ll> &arr) { //=> O(N)
        if (st == en) {
            t[node] = arr[st];
            return;
        }
        int mid = (st + en) >> 1;
        build(node << 1, st, mid, arr); // divide left side
        build(node << 1 | 1, mid + 1, en, arr); // divide right side
        // Merging left and right portion
        auto &Cur = t[node];
        auto &Left = t[node << 1];
        auto &Right = t[node << 1 | 1];
        Cur = merge(Left, Right);
        return;
    }
    void update(int node, int st, int en, int idx, ll val) { //=> O(log n)
        if (st == en) {
            t[node] = val;
            return;
        }
        int mid = (st + en) >> 1;
        if (idx <= mid) update(node << 1, st, mid, idx, val);
        else update(node << 1 | 1, mid + 1, en, idx, val);
        // Merging left and right portion
        auto &Cur = t[node];
        auto &Left = t[node << 1];
        auto &Right = t[node << 1 | 1];
        Cur = merge(Left, Right);
        return;
    }
    ll query(int node, int st, int en, int l, int r) { //=> O(log n)
        if (st > r || en < l) { // No overlapping and out of range
            return 0; // <== careful 
        }
        if (l <= st && en <= r) { // Complete overlapped (l-r in range)
            return t[node];
        }
        // Partial overlapping
        int mid = (st + en) >> 1;
        auto Left = query(node << 1, st, mid, l, r);
        auto Right = query(node << 1 | 1, mid + 1, en, l, r);
        return merge(Left, Right);
    }
} st;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    st.build(1, 1, n, a);

    while (q--)
    {
        ll a, b; cin >> a >> b;
        cout << st.query(1, 1, n, a, b) << nl;
    }
    
    return 0;
}