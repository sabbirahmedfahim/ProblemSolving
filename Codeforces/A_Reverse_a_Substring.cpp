#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    string arektaS = s; sort(all(arektaS));

    if(s == arektaS) cout << "NO" << nl;
    else 
    {
        for (int i = 0; i < n - 1; i++)
        {
            if(s[i] > s[i + 1]) 
            {
                cout << "YES" << nl;
                cout << i + 1 << " " << i + 2 << nl;
                return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}