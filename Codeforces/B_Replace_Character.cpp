#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    map<char, int> mp;
    for(auto e : s) mp[e]++;

    if(mp.size() == 1) 
    {
        cout << s << nl; return;
    }

    char mx_e = 'a', mx = 0;
    for(auto [key, val] : mp)
    {
        if(val > mx)
        {
            mx_e = key;
            mx = val;
        } 
    }

    char mnEle = 'a';
    if(mx_e == 'a') mnEle = 'b';
    
    int mn = 1E9;
    for(auto [key, val] : mp)
    {
        if(key == mx_e) continue;

        if(val < mn)
        {
            mnEle = key;
            mn = val;
        }
    }

    for(auto &e : s)
    {
        if(e == mnEle) 
        {
            e = mx_e; break;
        }
    }

    cout << s << nl;
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