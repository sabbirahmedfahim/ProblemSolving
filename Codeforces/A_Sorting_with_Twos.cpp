// took hints
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


    int powW = 1;
    for (int i = 1; i < n;) // skip first pos
    {
        int x = (1<<powW++);
        for (int j = i; j < n-1 && j <= x-2; j++) 
        {
            if(a[j] > a[j + 1]) 
            {
                cout << "NO" << nl; return;
            }
            // cout << a[j] << ' ';
        }
        // cout << nl;
        i = x;
    }
    
    cout << "YES" << nl;
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