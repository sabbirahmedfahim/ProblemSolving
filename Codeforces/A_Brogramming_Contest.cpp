#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int one = count(all(s), '1');
    int zero = count(all(s), '0');

    // edge case
    if(s.size() == one)
    {
        cout << 1 << nl; return;
    }
    if(s.size() == zero)
    {
        cout << 0 << nl; return;
    }

    int cnt = 0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] != s[i+1]) cnt++;
    }
    
    if(s[0] == '1' && cnt >= 1) cnt++;

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