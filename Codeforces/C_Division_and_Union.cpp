#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n), b;
    for(auto &e : a) cin >> e.first >> e.second;
    b = a;
    map<pair<int, int>, int> greeeeen;
    
    sort(all(a));

    int currLast = a[0].second, secondSuru = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i].first > currLast) 
        {
            secondSuru = i; break;
        }

        greeeeen[a[i]] = 1;

        currLast = max(currLast, a[i].second);
    }
    

    // cout << currLast << " " << secondSuru << nl;
    if(secondSuru == -1)
    {
        cout << -1 << nl; return;
    }

    for (int i = 0; i < n; i++)
    {
        if(greeeeen[b[i]] == 1) cout << 1 << " ";
        else cout << 2 << " ";
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