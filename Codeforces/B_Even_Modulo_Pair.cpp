// resolved from the editorial (have lackings on odd-odd pair)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int even = 0;
    for(auto e : a)
    {
        if(e % 2 == 0) even++;
    }

    if(even >= 2) // sure OK
    {
        int x = -1, y = -1;
        for(auto e : a)
        {
            if(e % 2 == 0)
            {
                if(x == -1) x = e;
                else y = e;
            }
        }
        cout << x << " " << y << nl;
        return;
    }

    // single even
    if(even == 1)
    {
        int evenData;
        for(auto e : a) if(e % 2 == 0) evenData = e;
 
        for(auto e : a)
        {
            if(e == evenData) continue;
            if((max(e, evenData) % min(e, evenData)) % 2 == 0 || ((max(e, evenData) % min(e, evenData)) % 2 == 0)) 
            {
                cout << min(e, evenData) << " " << max(e, evenData) << nl;
                return;
            }
        }
    }

    // now work with odd-odd pair
    vector<int> onlyOdds;
    for(auto e : a) 
        if(e & 1) onlyOdds.push_back(e);

    int K = min<int>(onlyOdds.size(), 31); // do not understand the portion
    for (int i = 0; i < K; i++)
    {
        for (int j = i + 1; j < K; j++)
        {
            if((onlyOdds[j] % onlyOdds[i]) % 2 == 0) 
            {
                cout << onlyOdds[i] << " " << onlyOdds[j] << nl;
                return;
            }
        }
    }

    cout << -1 << nl;
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}