#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    vector<char> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = s[i - 1];
    }
    // print(a);

    ll cost = 0;
    int prev = 0;
    for (int i = 1; i <= n; i++)
    {
        if(a[i] == '0')
        {
            int mn = -1;
            for (int j = 2; j * j <= i; j++)
            {
                if(i % j == 0)
                {
                    mn = j;
                    mn = max(mn, i / j);
                }
            }
            // cerr << mn << nl;

            if(i == 1 && mn == -1) mn = 1;
            if(mn == -1)
            {
                prev = i;
                cost += i;
                for (int j = i + i; j <= n; j += i)
                {
                    if(a[j] == '1') break;

                    a[j] = '1';
                    cost += i;
                }
                
            }
            else 
            {
                if(mn >= prev) prev = mn;
                else 
                {
                    mn = i;
                    prev = mn;
                }
                // cerr << prev << " --> " << i << " : " << mn << nl;
                
                cost += mn;
                for (int j = i + mn; j <= n; j += mn)
                {
                    if(a[j] == '1') break;

                    a[j] = '1';
                    cost += mn;
                }
                
            }

            // cerr << cost << nl;
        }
        // cerr << i << " : " << prev << nl;
    }
    
    cout << cost << nl;
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