#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> st;
    for(auto e : a)
    {
        if(e == 0) continue;
        st.insert(e);
    }

    if(st.size() != n)
    {
        cout << "YES" << nl; return;
    }

    st.clear();
    for(auto e : a) st.insert(e);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j) continue;

            int x = a[i] - a[j], y = a[j] - a[i];
            if(st.count(x) || st.count(y))
            {
                cout << "YES" << nl; return;
            }
        }
    }
    
    cout << "NO" << nl;
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
/*
-2 4 5 => -6, 2, -7, 3, -1, 1
2 4 5  => -2, 6, -3, 7, -1, 9


*/