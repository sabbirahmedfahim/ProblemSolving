#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int nearestDivByK(int x, int k)
{
    if(x % k == 0) return x;

    int curr = x / k; curr++;

    return (k * curr);
}
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    multiset<int> ml;
    for(auto e : a) ml.insert(e);

    int moves = 0;
    while (!ml.empty())
    {
        if(ml.count(k))
        {
            while (!ml.empty() && ml.count(k))
            {
                auto it = ml.find(k);
                ml.erase(it);
                moves++;
            }
            cerr << "#" << nl;
            continue;
        }

        auto it = ml.begin();
        int data = *it;

        if(data % k == 0)
        {
            while (!ml.empty() && *ml.begin() == data)
            {
                moves++;
                ml.erase(ml.begin());
            }
        }
        else 
        {
            int curr = nearestDivByK(*ml.begin(), k);
            while (!ml.empty() && *ml.begin() <= curr)
            {
                moves += curr - *ml.begin();
                ml.erase(ml.begin());
            }
        }
    }
    
    cout << moves << nl;
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