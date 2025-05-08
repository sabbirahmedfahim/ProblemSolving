#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int cnt = 0;

    string x = "map", y = "pie";
    for (int i = 0; i < n-2; i++)
    {
        string z = s.substr(i, 3);
        if(z == x)
        {
            s[i + 2] = 'x'; cnt++;
        }
        else if(z == y) 
        {
            s[i + 2] = 'x'; cnt++;
        }
    }
    
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