#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1), b(n + 1);
    set<int> st;
    for (int i = 1; i <= n; i++) cin>>a[i], st.insert(a[i]);
    for (int i = 1; i <= n; i++) cin>>b[i], st.insert(b[i]);

    map<int, int> x, y;

    for (int i = 1; i <= n; )
    {
        int j = i;
        while (j <= n && a[i] == a[j])
        {
            j++;
        }

        x[a[i]] = max(x[a[i]], j - i);
        i = j;
    }

    for (int i = 1; i <= n; )
    {
        int j = i;
        while (j <= n && b[i] == b[j])
        {
            j++;
        }

        y[b[i]] = max(y[b[i]], j - i);
        i = j;
    }
    
    int res = 0;
    for(auto e : st)
    {
        res = max(res, x[e] + y[e]);
    }
 
    cout << res << nl;
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