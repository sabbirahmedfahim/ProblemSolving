#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> a(n);
    for(auto &e : a) cin >> e;

    int mx = -1E9;
    int curri, currj;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[j] - a[i] > mx)
            {
                mx = a[j] - a[i];
                curri = i, currj = j;
            }
        }
    }

    // cerr << currj << " " << curri << nl;

    int curr_mx = 1E9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(i == curri || j == currj) continue;
            
            curr_mx = min(curr_mx, a[j] - a[i]);
            // cerr << curr_mx << nl;
        }
    }

    cout << curr_mx << nl;
    
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