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
    string x; 
    for (int i = 0; i < n;)
    {
        if(s[i] == '1') 
        {
            x += s[i]; i++;
        }
        else 
        {
            x += s[i];
            while (i < n && s[i] == '0')
            {
                i++;
            }
        }
    }
    
    // cout << x << nl;
    int zero = count(all(x), '0'), one = count(all(x), '1');
    if(one > zero) cout << "Yes" << nl;
    else cout << "No" << nl;
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