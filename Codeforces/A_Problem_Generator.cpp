#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; string s; cin >> n >> m >> s;
    map<char, int> mp;
    for(auto e : s) mp[e]++;
    // for(auto [key, val] : mp)
    // {
    //     cout << key << " " << val << nl;
    // }

    int res = 0;
    string x = "ABCDEFG";
    for (int i = 0; i < x.size(); i++)
    {
        if(!mp.count(x[i]) || mp[x[i]] <= m) 
        {
            if(!mp.count(x[i])) res += m;
            else res += (m-mp[x[i]]);
        }
        // cout <<  res << " ";
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