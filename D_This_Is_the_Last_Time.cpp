#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int q, curr; cin >> q >> curr;
    vector<tuple<int, int, int>> queries(q);

    set<int> LR, values;
    for (int i = 0; i < q; i++)
    {
        int l, r, real; cin >> l >> r >> real;
        queries[i] = {l, r, real};

        if(l <= curr && curr <= r) LR.insert(l), LR.insert(r), values.insert(curr);
    }
    
    for (int i = 0; i < q; i++)
    {
        for(auto [l, r, real] : queries)
        {
            auto it = LR.upper_bound(l);
            if(it != LR.end() && l <= *it && *it <= r) LR.insert(l), LR.insert(r), values.insert(real);
        }
    }

    if(LR.empty()) cout << curr << nl;
    else cout << *--LR.end() << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}