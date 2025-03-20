#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    for (int k = 0; k < 100; k++)
    {
        for (int i = 1; i < n-1; i++)
        {
            if(a[i-1] < a[i] && a[i] > a[i+1]) 
            {
                swap(a[i], a[i+1]); 
            }
        }
        // print(a);
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