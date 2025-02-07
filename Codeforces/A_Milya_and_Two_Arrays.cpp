#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<int> a(n), b(n); 
    map<int, int> mpa, mpb;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; mpa[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i]; mpb[b[i]]++;
    }

    if((mpa.size() == 1 && mpb.size() <= 2) || (mpb.size() == 1 && mpa.size() <= 2))
    {
        cout << "NO" << nl;
    }
    else cout << "YES" << nl;
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