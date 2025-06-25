// Resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;
    
    // i can assume answer is valid until 2, oh no! think of an array : 2 100 200 300 400 2
    // my observation was wrong, because 300 (2-400)
    
    for (int i = 0; i < n-1; i++)
    {
        if(abs(a[i] - a[i + 1]) <= 1)
        {
            cout << 0 << nl; return;
        }
    }
    
    // increasing array jodi decrease hoy or decreasing array jodi increase hoy then ans 1
    vector<int> b = a;
    reverse(all(b));

    if(is_sorted(all(a)) || is_sorted(all(b)))
    {
        cout << -1 << nl; return;
    }
    cout << 1 << nl;
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