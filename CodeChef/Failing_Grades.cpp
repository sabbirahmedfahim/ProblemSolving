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

    int sum = a[0], vag = 1;
    if(sum < 40)
    {
        cout << "No" << nl; return;
    }
    for (int i = 1; i < n; i++)
    {
        sum += a[i], vag++;
        if(sum/vag < 40)
        {
            cout << "No" << nl; return;
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
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}