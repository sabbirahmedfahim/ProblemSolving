// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y)
{
    if(x.second != y.second) return x.second < y.second;
    return x.first < y.first;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(all(a), cmp);
    int curEnd = -1;
    // for(auto [x, y] : a) cout << x << " " << y << nl;

    int cnt = 0;
    for(auto [x, y] : a)
    {
        if(curEnd == -1)
        {
            cnt++;
            curEnd = y;
        }
        else if(curEnd <= x)
        {
            cnt++;
            curEnd = y;
        }
    }

    cout << cnt << nl;

    return 0;
}