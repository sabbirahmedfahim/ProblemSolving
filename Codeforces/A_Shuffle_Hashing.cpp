#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string p, h; cin >> p >> h; 
    int szP = p.size();
    map<char, int> mp, mp2; for(auto e : p) mp[e]++;

    for (int i = 0; i < h.size(); i++)
    {
        if(i+szP > h.size()) break;

        string s = h.substr(i, szP); 
        // cout << s << nl;
        for(auto e : s) mp2[e]++;
        if(mp == mp2) 
        {
            cout << "YES" << nl; return;
        }

        mp2.clear();
    }
    cout << "NO" << nl;
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