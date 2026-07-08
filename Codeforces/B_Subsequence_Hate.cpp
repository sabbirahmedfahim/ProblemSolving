#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s; int n = s.size();
    int one = count(all(s), '1'), zero = n - one;
    if(one == n || zero == n)
    {
        cout << 0 << nl; 
        return;
    }

    int needZero = 0, needOne = 0, ans = n;
    for(auto e : s) needZero += e == '0';

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') needOne++;
        if(s[i] == '0') needZero--;

        ans = min(ans, n - (needOne + needZero));
    }

    needZero = 0, needOne = 0;
    for(auto e : s) needOne += e == '1';

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') needZero++;
        if(s[i] == '1') needOne--;

        ans = min(ans, n - (needOne + needZero));
    }
    
    cout << ans << nl;
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