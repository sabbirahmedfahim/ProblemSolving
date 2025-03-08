#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    string x = "aeiuo";
    int idx = 0;
    string cnt;

    map<char, int> mp;
    for(int i = 0; i < n; i++)
    {
        if(idx == 5) idx = 0;
        mp[x[idx]]++;
        // cout << x[idx];
        idx++;
    }
    
    string res;
    for(auto [key, val] : mp) 
    {
        // cout << key << ' ' << val << nl;
        string y(val, key);
        res += y;
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