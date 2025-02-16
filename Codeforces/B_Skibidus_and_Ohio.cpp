#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    if(s.size() == 1)
    {
        cout << 1 << nl; return;
    }

    bool isDuplicate = false;
    for (int i = 0; i < s.size()-1 && !isDuplicate; i++)
    {
        if(s[i] == s[i+1]) isDuplicate = true;
    }
    
    if(isDuplicate) cout << 1 << nl;
    else cout << s.size() << nl;
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