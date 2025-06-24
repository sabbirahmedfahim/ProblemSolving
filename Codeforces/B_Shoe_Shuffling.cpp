#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    map<int, int> mp;
    map<int, deque<int>> vmp;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        vmp[a[i]].push_back(i);
        mp[a[i]]++;
    }
    
    for(auto [x, y] : mp)
    {
        if(y == 1)
        {
            cout << -1 << nl; return;
        }
    }

    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        if(vmp[a[i]].back() != i)
        {
            res.push_back(vmp[a[i]].back());
            vmp[a[i]].pop_back();
        }
        else 
        {
            res.push_back(vmp[a[i]].front());
            vmp[a[i]].pop_front();
        }
    }

    print(res);
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