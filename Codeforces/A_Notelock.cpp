#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;

    int zero = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') zero++;
        else 
        {
            if(zero >= (k - 1)) cnt++;

            zero = 0;
        }
    }
    
    zero = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') zero++;
        else 
        {
            if(zero >= (k - 1)) 
            {
                i = n; break;
            }
            else 
            {
                cnt++; i = n; break;
            }
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