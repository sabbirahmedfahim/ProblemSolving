#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    /*
    observation: if k >= n, it is easy to calc
    else k is surely less or equal than 50. no no no.....
    i guess it is easier than the thought itself, only check the parity of k 
    */

    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    sort(all(a)); sort(all(b));

    if(k & 1)
    {
        ll sum = accumulate(all(a), 0ll);
        if(a[0] < b[m-1]) 
        {
            sum -= a[0]; sum += b[m-1];
        }
        cout << sum << nl;
    }
    else 
    {
        ll sum = accumulate(all(a), 0ll);
        if(a[0] < b[m-1]) sum += b[m - 1], sum -= a[0], swap(a[0], b[m - 1]);
        sort(all(a)); sort(all(b));
        if(a[n-1] > b[0]) sum -= a[n - 1], sum += b[0];
        cout << sum << nl;
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