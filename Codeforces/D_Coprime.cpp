// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
map<pair<int,int>, int> coprimes;
void preCalc() // 304192
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if(__gcd(i, j) == 1 && !coprimes.count({j, i}))
            {
                coprimes[{i, j}] = 1;
            }
        }
    }
}
void solve()
{
    int n; cin >> n;
    map<int, int> idx;
    for (int i = 1; i <= n; i++)
    {
        int data; cin >> data;
        idx[data] = i;
    }
    
    int res = -1;
    for(auto e : coprimes)
    {
        int x = e.first.first, y = e.first.second;
        if(idx.count(x) && idx.count(y))
        {
            res = max(res, idx[x] + idx[y]);
        }
    }

    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preCalc();
    // cout << coprimes.size() << nl;

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}