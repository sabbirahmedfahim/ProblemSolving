// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
ekta ache e, arekta find korte hobe
*/
bool isValid(int x, int y, int z)
{
    return (x+y > z && y+z > x && z+x > y);
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;
    // i guess sorting is not possible bcz *non-empty continuous subsegments*

    for (int i = 0; i < n-1; i++)
    {
        int x = a[i], y = a[i+1];
        if(isValid(min(x, y), min(x, y), max(x, y)))
        {
            cout << "YES" << nl; return;
        }
    }
    cout << "NO" << nl;
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