#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));
    // print(a);

    int cnt = 0, idx = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] <= 0) cnt++;
        else 
        {
            idx = i; break;
        }
    }

    // if(idx > 0) idx--;

    for (int i = idx; i < n-1; i++)
    {
        if(abs(a[i] - a[i + 1]) < a[i + 1]) cnt++;
    }
    
    cout << cnt << nl;
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