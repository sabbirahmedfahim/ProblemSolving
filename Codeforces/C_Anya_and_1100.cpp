// resolved (eita shera !!)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    int n = s.size();

    int cnt = 0;
    for (int i = 0; i < n-3; i++)
    {
        if(s.substr(i, 4) == "1100") cnt++;
    }
    // cout << cnt << nl;
    
    int q; cin >> q;
    while (q--)
    {
        int pos, data; cin >> pos >> data; 
        pos--; // zero based

        string x = s;
        x[pos] = data + '0';
        for (int i = max(0, pos-3); i < min(n-3, pos + 4); i++)
        {
            if(s.substr(i, 4) == "1100" && x.substr(i, 4) != "1100") cnt--;
            if(s.substr(i, 4) != "1100" && x.substr(i, 4) == "1100") cnt++;
        }
        s[pos] = data + '0';

        if(cnt >= 1) cout << "YES" << nl;
        else cout << "NO" << nl;
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