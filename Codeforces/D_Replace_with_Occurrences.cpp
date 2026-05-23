#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> mp;
    for(auto e : a) mp[e]++;

    for (int i = 0; i < n; i++)
    {
        if(mp[a[i]] % a[i] != 0)
        {
            cout << -1 << nl; return;
        }
    }

    int curr = 1;
    map<int, vector<int>> valueAsign;
    for(auto [x, y] : mp)
    {
        for (int i = 0; i < y / x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                // cout << curr << " ";
                valueAsign[x].push_back(curr);
            }
            curr++;
        }
    }
    // cout << nl;

    for (int i = 0; i < n; i++)
    {
        cout << valueAsign[a[i]].back() << " ";
        valueAsign[a[i]].pop_back();
    }
    
    cout << nl;
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