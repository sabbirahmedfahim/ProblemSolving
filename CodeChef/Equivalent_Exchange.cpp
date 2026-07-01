#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int needRed = 0, needBlue = 0, haveRed = 0, haveBlue = 0, mx1 = 0, mx2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            haveRed += a[i];
            if(haveBlue < a[i]) needBlue += a[i] - haveBlue;
            haveBlue -= a[i];

            mx1 = max(mx1, needBlue);
            needBlue = 0;
        }
        else 
        {
            haveBlue += abs(a[i]);
            if(haveRed < abs(a[i])) needRed += abs(a[i]) - haveRed;
            haveRed -= abs(a[i]);

            mx2 = max(mx2, needRed);
            needRed = 0;
        }
    }
    
    // cerr << needRed << " : " << needBlue << nl;
    
    if((mx1 + mx2) <= k) cout << "Yes" << nl;
    else cout << "No" << nl;
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