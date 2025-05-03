#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    if(n == 2)
    {
        if(s[0] == s[1])
        {
            if(s[0] == 'A') cout << "Bob" << nl;
            else cout << "Alice" << nl;
        }
        else if(s[0] == 'B') cout << "Bob" << nl;
        else cout << "Alice" << nl;
        return;
    }

    int B = count(all(s), 'B');
    int A = count(all(s), 'A');

    // if(s[0] == s.back())
    // {
    //     if(s[0] == 'A') cout << "Alice" << nl;
    //     else cout << "Bob" << nl;
    //     return;
    // }

    if(s[0] == 'A' && s[n-2] == 'A' && s[n-1] == 'B')
    {
        if(B == 1) cout << "Alice" << nl;
        else cout << "Bob" << nl;
    }
    if(s[0] == 'A' && s[n-2] == 'B' && s[n-1] == 'B')
    {
        cout << "Bob" << nl;
        // if(A == 1) cout << "Bob" << nl;
        // else cout << "Alice" << nl;
    }
    if(s[0] == 'B' && s[n-2] == 'A' && s[n-1] == 'A')
    {
        cout << "Alice" << nl;
        // if(A == 1) cout << "Bob" << nl;
        // else cout << "Alice" << nl;
    }
    if(s[0] == 'B' && s[n-2] == 'B' && s[n-1] == 'A')
    {
        if(A == 1) cout << "Alice" << nl;
        else cout << "Bob" << nl;
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