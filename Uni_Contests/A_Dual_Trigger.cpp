#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; string s; cin >> s;
    int cnt_zero = count(all(s), '1');

    bool adj_one = false;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i] == s[i + 1] && s[i] == '1') adj_one = true;
    }

    if(cnt_zero == 2 && adj_one)
    {
        cout << "NO" << nl; return;
    }

    if(cnt_zero & 1) cout << "NO" << nl;
    else cout << "YES" << nl;
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