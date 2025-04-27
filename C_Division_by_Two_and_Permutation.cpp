#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    sort(all(a)); reverse(all(a));
    set<int> s, need;
    for (int i = 1; i <= n; i++) need.insert(i);
    
    for(auto e : a)
    {
        while (e)
        {
            if(need.count(e))
            {
                need.erase(e); break;
            }
            e >>= 1;
        }
    }

    if(need.empty()) cout << "YES" << nl;
    else cout << "NO" << nl;
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