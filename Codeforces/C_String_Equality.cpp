#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n,k; cin >> n >> k;
    string x, y; cin >> x >> y;

    if(n == k)
    {
        if(x == y) cout << "Yes" << nl;
        else cout << "No" << nl;
        return;
    }

    multiset<char> mp;
    for(auto e : y) mp.insert(e);

    for (int i = 0; i < n; i++)
    {
        auto it = mp.lower_bound(x[i]);

        if(it == mp.end())
        {
            cout << "No" << nl; return;
        }
        else 
        {
            mp.erase(it);
        }
    }
    
    cout << "Yes" << nl;
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