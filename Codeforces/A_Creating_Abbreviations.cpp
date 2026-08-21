// resolved (i dont want this type statement again. unclear statement.)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;

    map<char, int> mp, arektaMp;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;

        for(auto e : s) mp[(char) toupper(e)]++;
    }

    for (int i = 0; i < m; i++)
    {
        string s; cin >> s;
        for(auto e : s) arektaMp[e]++;
    }

    for(auto [x, y] : arektaMp)
    {
        if(!mp.count(x))
        {
            cout << "NO" << nl; return;
        }
    }

    cout << "YES" << nl;
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