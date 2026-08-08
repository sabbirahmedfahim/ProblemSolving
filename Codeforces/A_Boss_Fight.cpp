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

    int whoBig = -1, cnt = 0, otherCnt = 0, otherSum = 0;
    for(auto [x, y] : mp)
    {
        if(cnt < y) 
        {
            cnt = y;
            whoBig = x;
        }
    }
    for(auto [x, y] : mp)
    {
        if(whoBig == x) continue;

        otherCnt += y;
        otherSum += x * y;
    }

    cnt = min(cnt, otherCnt + 2);
    int sum = otherSum + (whoBig * cnt);

    cout << sum << nl;
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