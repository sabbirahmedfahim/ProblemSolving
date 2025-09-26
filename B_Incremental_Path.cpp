#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int cmd, n; cin >> cmd >> n;
    string s; cin >> s;

    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> resSt;
    for(auto e : a) resSt.insert(e);

    for (int i = 0; i < cmd; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(s[j] == 'A') 
            {
                resSt.insert(j + 1);
            }
            else 
            {
                int k = 
            }
        }
        
    }
    
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