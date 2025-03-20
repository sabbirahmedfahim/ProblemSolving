// used hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if(k & 1)
        {
            if(i != n) cout << n << ' ';
            else cout << n-1 << ' ';
        } 
        else 
        {
            if(i != n && n-1 != i) cout << n-1 << ' ';
            else if(i != n) cout << n << ' ';
            else cout << n-1 << ' ';
        }
    }
    cout << nl;
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