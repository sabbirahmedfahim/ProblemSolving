#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));

    int tmp = c;
    c = max(a[0] + 1, c);
    for (int i = 1; i < n; i++)
    {
        if(a[i] == c) c++;
    }
    
    cout << c - tmp << nl;
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