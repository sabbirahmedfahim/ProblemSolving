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
    
    map<int, int> mp;
    for(auto e : a) mp[e]++;
    if(mp.size() == 1)
    {
        cout << "NO" << nl; return;
    }
    
    int one = -1, two = -1, taken = -1;
    for (int i = 0; i < n; i++)
    {
        if(taken != a[i])
        {
            if(one == -1) one = i + 1, taken = a[i];
            else 
            {
                two = i + 1; break;
            }
        }
    }

    for(auto [x, y] : mp) cerr << x << " --> " << y << nl;
    cerr << nl;

    cout << "YES" << nl;
    for (int i = 1; i < n; i++)
    {
        if(taken == a[i]) cout << i + 1 << " " << two << nl;
        else cout << i + 1 << " " << one << nl;
    }
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