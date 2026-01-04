// took hints from the TLE Eliminators
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
1 2 5
1->1
2->1
3->2
*/
void solve()
{
    int n; cin>>n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        int hi = i, lo = 1, res = 1;
        while(hi >= lo)
        {
            int mid = lo + (hi - lo) / 2;
            int len = i - mid + 1;
            // cerr << len << nl;
            if(len <= a[mid])
            {
                res = max(res, len);
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        cout << res << " ";
    }
    cout << nl;
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