#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int mx = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') 
        {
            mx = max(mx, curr);
            curr = 0;
        }
        else curr++;
    }
    mx = max(mx, curr);

    int arekta = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') break;
        arekta++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if(s[i] == '1') break;
        arekta++;
    }
    
    mx = max(mx, arekta);

    cout << mx << nl;
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