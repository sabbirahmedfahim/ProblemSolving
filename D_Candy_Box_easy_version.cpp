#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    map<int, int> mp, mpp;
    while(n--)
    {
        int data; cin >> data;
        mp[data]++;
    }

    for(auto [x, y] : mp)
    {
        // cerr << x << " --> " << y << nl;
        mpp[y]++;
    }
    int tot = 0, mx = 0;
    for(auto [x, y] : mpp) 
    {
        tot += x;
        mx = max(mx, x);
    }
    // for(auto [x, y] : mpp)
    // {
    //     cerr << x << " --> " << y << nl;
    // }

    int have = 0;
    for (int i = mx; i >= 1; i--)
    {
        if(mpp[i] > 1) have += mpp[i] - 1;
        else if(have > 0)
        {
            have--; tot += i;
        }
        // cerr << have << nl;
    }
    
    cout << tot << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}