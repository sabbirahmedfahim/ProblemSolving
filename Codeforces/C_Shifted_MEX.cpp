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
    for(auto e : a) st.insert(e);
    vector<int> b;
    for(auto e : st) b.push_back(e);

    int mx = 1, curr = 1;
    for (int i = 0; i < b.size() - 1; i++)
    {
        if(b[i] == (b[i + 1] - 1))
        {
            curr++;
            mx = max(mx, curr);
        }
        else 
        {
            curr = 1;
            mx = max(mx, curr);
        }
    }
    
    cout << mx << nl;
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