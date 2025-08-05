#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
1 2
2 3
3 4
1 4
*/
bool cmp(tuple<int, int, int> x, tuple<int, int, int> y)
{
    if(get<0> (x) == get<0> (y)) return get<1> (x) > get<1> (y);
    return get<1> (x) < get<1> (y);
}
void solve()
{
    int n; cin >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        a[i] = {x, y, i + 1};
    }
    sort(all(a), cmp);

    if(a.size() == 1)
    {
        cout << 1 << nl << 1 << nl; return;
    }

    vector<int> res;
    set<int> st; int prev = -1;
    for (int i = 0; i < n; i++)
    {
        auto [x, y, z] = a[i];
        if(!st.count(x)) 
        {
            if(prev != -1 && y <= prev) continue;
            res.push_back(z), prev = y;
        }

        st.insert(x);
    }
    
    sort(all(res));
    cout << res.size() << nl;
    print(res);
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