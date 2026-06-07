#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(auto &e : a) cin>>e;

    set<int> st;
    for(auto e : a) st.insert(e);

    for (int i = 0; i < n; i++)
    {
        if(x % a[i] == 0)
        {
            cout << "YES" << nl; return;
        }

        if(st.count(x % a[i]))
        {
            cout << "YES" << nl; return;
        }
    }
    
    cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}