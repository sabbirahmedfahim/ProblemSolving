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

    int cnt = 0;
    for (int i = 0; i < n;)
    {
        if(a[i] & 1)
        {
            i++;
            while (i < n && (a[i] & 1))
            {
                cnt++, i++;
            }
        }
        else 
        {
            i++;
            while (i < n && (a[i]%2 == 0))
            {
                cnt++, i++;
            }
        }
    }
    
    cout << cnt << nl;
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