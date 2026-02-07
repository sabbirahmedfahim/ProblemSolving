#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, w; cin >> n >> w;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;
    multiset<ll> ml;
    for(auto e : a) ml.insert(e);

    ll res = 0;

    for (int i = 0; !ml.empty(); i++)
    {
        ll currWidth = w;
        // per iter, we can erase at max w
        while(!ml.empty())
        {
            auto currMx = *prev(ml.end());
            while((currMx > currWidth || !ml.count(currMx)) && currMx > 0)
            {
                currMx /= 2;
            }

            if(ml.count(currMx) && currMx <= currWidth)
            {
                auto it = ml.find(currMx);
                ml.erase(it);
                currWidth -= currMx;
            }
            else break;
        }

        res++;
    }

    cout << res << nl;
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