#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
struct ST
{
    int x, y, z;
};
void solve()
{
    int n, m; cin >> n >> m;
    set<int> st;
    while (n--)
    {
        int data; cin >> data;
        st.insert(data);
    }
    
    deque<ST> dq;
    for (int i = 0; i < m; i++)
    {
        int a, b, c; cin >> a >> b >> c;
        dq.push_back({a, b, c});
    }
    // for(auto [x, y, z] : dq)
    // {
    //     cout << x << " " << y << " " << z << nl;
    // }

    for (int i = 0; i < m * m && !dq.empty(); i++)
    {
        int a = dq.front().x, b = dq.front().y, c = dq.front().z;
        dq.pop_front();

        if(st.count(a) && st.count(b)) st.insert(c);
        else dq.push_back({a, b, c});
    }
    
    cout << st.size() << nl;
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