// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y ; cin >> x >> y;

    if(abs(x - y) <= 1)
    {
        cout << 1 << nl;
        for (int i = 0; i < x; i++) cout << 1 << ' ';
        for (int i = 0; i < y; i++) cout << -1 << ' ';
        cout << nl;

        return;
    }

    int diff = abs(x - y);

    set<int> st;
    for (int i = 1; i * i <= diff; i++)
    {
        if(diff % i == 0)
        {
            st.insert(i);
            st.insert(diff / i);
        }
    }
    
    cout << st.size() << nl;
    for (int i = 0; i < x; i++) cout << 1 << ' ';
    for (int i = 0; i < y; i++) cout << -1 << ' ';
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}