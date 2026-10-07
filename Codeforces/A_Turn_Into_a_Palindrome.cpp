#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; char c; string s; cin >> n >> c >> s;

    int l = 0, r = n - 1;

    int cnt = 0;
    while (l <= r)
    {
        if(s[l] != s[r])
        {
            if(s[l] == c || s[r] == c) cnt++;
            else cnt += 2;
        }

        l++, r--;
    }
    
    cout << cnt << nl;
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