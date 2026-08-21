#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e; 
    for(auto &e : b) cin >> e; 

    sort(all(a)); sort(all(b));

    for(auto &e : a)
    {
        while (e % 2 == 0)
        {
            e /= 2;
        }
    }

    // print(a);
    multiset<int> A;
    for(auto e : a) A.insert(e);

    for(auto &e : b)
    {
        while (e > 0 && !A.count(e))
        {
            e /= 2;
        }
        
        if(!A.count(e))
        {
            cout << "NO" << nl; return;
        }

        A.erase(A.find(e));
    }

    cout << "YES" << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}