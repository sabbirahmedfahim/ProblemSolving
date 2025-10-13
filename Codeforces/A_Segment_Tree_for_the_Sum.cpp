#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 3E5 + 9;

struct ST
{
    // build, update, merge, query
    ll t[4 * N];

    auto merge(auto &l, auto &r)
    {
        return (l + r);
    }
    void build(int node, int st, int en, vector<ll> &a)
    {
        if(st == en)
        {
            t[node] = a[st]; return;
        }

        int mid = (st + en) >> 1;
        build(node << 1, st, mid, a);
        build(node << 1 | 1, mid + 1, en, a);

        auto &Cur = t[node];
        auto &Left = t[node << 1];
        auto &Right = t[node << 1 | 1];
        Cur = merge(Left, Right);
        return;
    }
    void update(int node, int st, int en, int idx, ll val)
    {
        if(st == en)
        {
            t[node] = val; return;
        }
        int mid = (st + en) >> 1;
        if(idx <= mid) update(node << 1, st, mid, idx, val);
        else update(node << 1 | 1, mid + 1, en, idx, val);

        auto &Cur = t[node];
        auto &Left = t[node << 1];
        auto & Right = t[node << 1 | 1];
        Cur = merge(Left, Right);
        return;
    }
    ll query(int node, int st, int en, int l, int r)
    {
        if(st > r || en < l) return 0;
        if(l <= st && r >= en) return t[node];

        int mid = (st + en) >> 1;
        auto Left = query(node << 1, st, mid, l, r);
        auto Right = query(node << 1 | 1, mid + 1, en, l, r);
        return merge(Left, Right);
    }
} st;
void solve()
{
    int n, q; cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    st.build(1, 1, n, a);

    while (q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 1)
        {
            int idx, data; cin >> idx >> data; idx++; // 1-based
            st.update(1, 1, n, idx, data);
        }
        else 
        {
            int l, r; cin >> l >> r; l++, r++; // 1-based
            cout << st.query(1, 1, n, l, r - 1) << nl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}