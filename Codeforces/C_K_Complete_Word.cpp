// took hints
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

    map<int, vector<char>> mp;
    for (int i = 0; i < n; i += k)
    {
        int l = i, r = i + k - 1, idx = 0;
        while (l <= r)
        {
            mp[idx].push_back(s[l]);
            mp[idx].push_back(s[r]);

            idx++, l++, r--;
        }
    }
    
    map<int, pair<char, int>> karKe;
    for(auto [x, y] : mp)
    {
        map<char, int> freq;
        for(auto e : y) freq[e]++;

        char who; int mx = 0;
        for(auto e : freq)
        {
            if(mx < e.second)
            {
                mx = e.second;
                who = e.first;
            }
        }

        karKe[x] = {who, mx};
    }

    for (int i = 0; i < n; i += k)
    {
        int l = i, r = i + k - 1, idx = 0;
        while (l <= r)
        {
            s[l] = karKe[idx].first;
            s[r] = karKe[idx].first;

            idx++, l++, r--;
        }
    }

    // cout << s << nl;

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
/*
wu(d)ixiaoxingxi(n)(g)h(e)clp
ng(d)edgnngdedgn(n)(g)d(e)dgn
*/