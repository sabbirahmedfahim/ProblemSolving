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
    int mx = *max_element(all(a));

    int curr = n, idxMx = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == mx)
        {
            idxMx = i; break;
        } 
    }
    
    curr--;
    for (int l = idxMx, r = idxMx; ; )
    {
        if(l - 1 >= 0 && l - 1 < n && a[l - 1] == curr)
        {
            l--; curr--;
        }
        else if(r + 1>= 0 && r + 1 < n && a[r + 1] == curr)
        {
            r++; curr--;
        }
        else break;
    }

    // cout << curr << nl;
    if(curr == 0) cout << "YES" << nl;
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