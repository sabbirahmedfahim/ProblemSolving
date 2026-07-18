#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string realS = s;

    int curr = k;
    for (int i = 0; i < n && curr--; i++)
    {
        if(s[i] == 'L') s[i] = 'R';
    }
    curr = k;
    for (int i = n - 1; i >= 0 && curr--; i--)
    {
        if(s[i] == 'R') s[i] = 'L';
    }
    
    curr = k;
    for (int i = 0; i < n && curr--; i++)
    {
        if(s[i] == 'L') 
        {
            cout << -1 << nl; return;
        }
    }


    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != realS[i]) cnt++;
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}