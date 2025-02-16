// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    int cnt = count(all(s), '*');
    // if(cnt == 0)
    // {
    //     if(s == t) cout << "YES" << nl;
    //     else cout << "NO" << nl;    
    //     return;
    // }
    if(n-cnt > m || (cnt == 0 && s != t))
    {
        cout << "NO" << nl; return;
    }

    for (int i = 0; i < min(n, m); i++)
    {
        if(s[i] == '*') break;
        if(s[i] != t[i])
        {
            cout << "NO" << nl; return;
        }
    }
    
    // for (int i = min(n, m)-1; i >= 0; i--)
    // {
    //     if(s[i] == '*') break;
    //     if(s[i] != t[i])
    //     {
    //         cout << "NO" << nl; return; 
    //     }
    // }

    reverse(all(s));
    reverse(all(t));
    
    for (int i = 0; i < min(n, m); i++)
    {
        if(s[i] == '*') break;
        if(s[i] != t[i])
        {
            cout << "NO" << nl; return;
        }
    }
    
    cout << "YES" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}