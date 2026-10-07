#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; // safer against overflow
}
void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, vector<int>> mp;

    for(auto e : a)
    {
        int data = e;

        if(__gcd(data, x) == 1) continue;

        for (int i = 2; i * i <= data; i++)
        {
            if(data % i == 0)
            {
                if(__gcd(i, x) > 1) mp[i].push_back(e);

                while (data % i == 0)
                {
                    data /= i;
                }
            }
        }
        if(data > 1 && __gcd(x, data) != 1) mp[data].push_back(e);
    }

    int mx = 0;
    for(auto [x, y] : mp)
    {
        int currMx = 0;
        for(auto e : y) currMx += e;

        mx = max(mx, currMx);
    }

    cout << mx << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}