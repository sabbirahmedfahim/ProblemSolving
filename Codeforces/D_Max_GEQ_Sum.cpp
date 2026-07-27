// used test cases
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 3e5 + 9;

struct ST 
{
    ll t[4 * N];

    ll merge(ll &l, ll &r) // Change this function
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
            XOR,OR-> return 0; AND-> return ~0LL;
            min-> return LLONG_MAX; max-> return LLONG_MIN;
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
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
 
    for (int i = 0; i < n; )
    {
        if(a[i] >= 0)
        {
            // cerr << i << nl;
            int currSum = 0, currMx = 0;
            while (i < n && currSum >= 0)
            {
                currMx = max(a[i], currMx);
                currSum += a[i];
    
                if(currSum > currMx)
                {
                    cout << "NO" << nl; return;
                }
                i++;
            }
        }
        else i++;
    }
 
    reverse(all(a));
 
    for (int i = 0; i < n; )
    {
        if(a[i] >= 0)
        {
            int currSum = 0, currMx = 0;
            while (i < n && currSum >= 0)
            {
                currMx = max(a[i], currMx);
                currSum += a[i];
    
                if(currSum > currMx)
                {
                    cout << "NO" << nl; return;
                }
                i++;
            }
        }
        else i++;
    }

    vector<int> b = a;
    a.clear();
    for(auto e : b)
    {
        if(e != 0) a.push_back(e);
    }

    if(a.empty())
    {
        cout << "YES" << nl; return;
    }

    n = a.size();
    st.build(1, 0, n - 1, a);

    // cout << st.query(1, 0, n - 1, 3, 3) << nl; return;
    
    vector<int> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    
    set<int> idxOfPos;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > 0) idxOfPos.insert(i);
    }
    
    // print(idxOfPos);
    for(auto e : idxOfPos)
    {
        if(e == 0)
        {
            auto it = idxOfPos.upper_bound(e);
            if(it == idxOfPos.end()) continue;

            int currSum = pref[*it];
            int currMx = st.query(1, 0, n - 1, e, *it);

            if(currSum > currMx)
            {
                cout << "NO" << nl; return;
            }

            auto it2 = idxOfPos.upper_bound(*it);
            if(it2 == idxOfPos.end()) continue;
            currSum = pref[*it2];
            currMx = st.query(1, 0, n - 1, e, *it2);

            if(currSum > currMx)
            {
                cout << "NO" << nl; return;
            }
        }
        else
        {
            auto it = idxOfPos.upper_bound(e);
            if(it == idxOfPos.end()) continue;

            int currSum = pref[*it] - pref[e - 1];
            int currMx = st.query(1, 0, n - 1, e, *it);

            if(currSum > currMx)
            {
                cout << "NO" << nl; return;
            }

            auto it2 = idxOfPos.upper_bound(*it);
            if(it2 == idxOfPos.end()) continue;
            currSum = pref[*it2] - pref[e - 1];
            currMx = st.query(1, 0, n - 1, e, *it2);

            if(currSum > currMx)
            {
                cout << "NO" << nl; return;
            }
        }
    }

    cout << "YES" << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}