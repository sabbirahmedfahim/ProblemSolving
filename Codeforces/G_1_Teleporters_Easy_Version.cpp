#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, c; cin >> n >> c;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    vector<ll> costArray;
    for (int i = 1; i <= n; i++)
    {
        costArray.push_back(i + a[i]);
    }
    sort(all(costArray));
    // print(costArray);

    int res = 0;
    for (int i = 0; i < costArray.size(); i++)
    {
        if(costArray[i] <= c)
        {
            res++;
            c -= costArray[i];
        }
        else break;
    }
    
    cout << res << nl;
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