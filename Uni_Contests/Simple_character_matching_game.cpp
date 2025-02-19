// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;

    char mat[n][m];
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = s[j];
        }
    }
    // thakur can change the entire string at most once, not a single character, i was wrong

    // col fix, iterate over row
    int ans = 0, ex = 0;
    for (int i = 0; i < m; i++)
    {
        map<char, int> mp; 
        int mx = 0;
        for (int j = 0; j < n; j++)
        {
            mp[mat[j][i]]++;
            mx = max(mx, mp[mat[j][i]]);
            // cout << mat[j][i];
            // cout << mp[mat[j][i]] << nl;
        }
        // cout << nl;

        // cout << mx << nl;
        ans += mx;
        if(mx != n) 
        {
            ex = 1;
        }
    }

    cout << ans + ex << nl;

    // col fix, iterate over row
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mat[j][i];
    //     }
    //     cout << nl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << mat[i][j];
    //     }
    //     cout << nl;
    // }
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