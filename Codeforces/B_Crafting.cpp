#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    ll toIncrease = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < b[i]) 
        {
            toIncrease += b[i] - a[i]; cnt++;
        }
    }
    
    if(cnt <= 1) 
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i] >= b[i]) a[i] -= toIncrease;
            else a[i] += toIncrease;

            if(a[i] < b[i]) 
            {
                cout << "NO" << nl; return;
            }
        }
        // print(a);
        cout << "YES" << nl;
    }
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