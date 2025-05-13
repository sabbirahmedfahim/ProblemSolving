// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    for (int i = 0; i < n-1; i++)
    {
        if(a[i] < a[i + 1]) 
        {
            a[i + 1] -= a[i]; a[i] = 0;
        }
        else if(i - 1 >= 0 && a[i - 1] == 0 && a[i] == a[i + 1])
        {
            a[i] = 0, a[i + 1] = 0;
        } 
        else if(i == 0 && 1 < n && a[i + 1] == a[i]) // could be an edge case
        {
            a[i] = 0, a[i + 1] = 0;
        }
        else break;
    }
    
    // print(a);
    if(is_sorted(all(a))) cout << "YES" << nl;
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