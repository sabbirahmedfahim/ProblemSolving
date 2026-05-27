#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b;
    for(auto &e : a) cin >> e;
    b = a;
    sort(all(a));

    set<int> st;
    for(auto e : a) st.insert(e);

    int res =(int) st.size();

    map<int, int> mp1, mp2;
    int mx1 = a[0], mx2 = b[0];
    for (int i = 0; i < n; i++)
    {
        mx1 = min(mx1, a[i]); mx2 = min(mx2, b[i]);

        if(mx1 != mx2) res--;
    }
    
    cout << res << nl;
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