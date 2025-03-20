#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    if(n == 1 && s[0] == '.') 
    {
        cout << 1 << nl; return;
    }
    for (int i = 0; i < n-2; i++)
    {
        if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')
        {
            cout << 2 << nl; return;
        }
    }
    
    int one = 0, two = 0;
    for (int i = 0; i < n-1; )
    {
        if(s[i] == '.' && s[i+1] == '.')
        {
            two++, i+=2;
        }
        else if(s[i] == '.')
        {
            one++, i++;
        }
        else i++;
    }
    if(s[n-2] == '#' && s[n-1] == '.') one++;
    
    cout << (two*2) + one << nl;
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