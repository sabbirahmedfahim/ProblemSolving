#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, jump, swim; cin >> n >> jump >> swim;
    /* try to ignore swim */
    string s; cin >> s;
    vector<char> v(n + 2);
    for (int i = 1; i <= n; i++)
    {
        v[i] = s[i-1];
    }
    // print(v);

    if(jump > n)
    {
        cout << "YES" << nl; return;
    }

    for (int i = 0; i <= n; i++)
    {
        bool paisi = false;
        for (int j = 1; j <= jump; j++)
        {
            if(i+j > n) 
            {
                cout << "YES" << nl; return;
            }
            else if(s[i+j] != 'C' && s[i+j] != 'W')
            {
                i += j; paisi = true; break;
            }
        }
        if(paisi == false)
        {
            
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