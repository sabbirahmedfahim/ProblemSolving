#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int B = 0, W = 0;
    int res = 1E9;
    for (int l = 0, r = 0; r < n; r++)
    {
        if(s[r] == 'B') B++;
        else W++;

        if(r - l + 1 == k)
        {
            res = min(res, W);

            if(s[l] == 'W') W--;
            else B--;
            l++;
        }
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