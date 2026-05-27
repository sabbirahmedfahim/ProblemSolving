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

    int curr_mx = -1, res = 0;

    for (int i = n-1; i >= 0; )
    {
        int cnt = 0;
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if(a[j] >= a[i]) 
            {
                break;
            }
            cnt++;
        }
        i = j;

        res = max(res, cnt);
    }
    
    cout << res << nl;
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