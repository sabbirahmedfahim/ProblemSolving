#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; char c;
    string s;
    cin >> n >> c >> s;

    int tot_problem = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != c) tot_problem++;
    }
    
    if(tot_problem == 0)
    {
        cout << 0 << nl;
        return;
    }

    if(tot_problem == 1)
    {
        if(s[n - 1] == c) 
        {
            cout << 1 << nl;
            cout << n << nl; 
        }
        else 
        {
            cout << 1 << nl;
            cout << n - 1 << nl;
        }
        return;
    }
    if(s[n - 1] == c)
    {
        cout << 1 << nl;
        cout << n << nl;
        return;
    }

    for (int i = n/2; i < n; i++)
    {
        if(s[i] == c)
        {
            cout << 1 << nl;
            cout << i + 1 << nl;
            return;
        }
    }
    

    cout << 2 << nl;
    cout << n - 1 << " " << n << nl;
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