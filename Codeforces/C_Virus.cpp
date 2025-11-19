#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int tot_n, m; cin >> tot_n >> m;
    vector<int> infected(m);
    for(auto &e : infected) cin >> e;
    sort(all(infected));

    vector<int> diff;
    for (int i = 0; i < m - 1; i++)
    {
        diff.push_back(infected[i + 1] - infected[i] - 1);
    }
    int arekta = tot_n - infected.back();
    arekta += infected[0] - 1;
    diff.push_back(arekta);
    sort(all(diff)); reverse(all(diff));
    // print(diff);

    if(tot_n == m)
    {
        cout << tot_n << nl;
        return;
    }
    // if(diff[0 ]== 1)
    // {
    //     cout << 1 << nl; return;
    // }

    ll good = 0, moreInfected = 0;
    for (int i = 0; i < diff.size(); i++)
    {
        diff[i] -= moreInfected;
        // cerr << diff[i] << nl;
        if(diff[i] > 1) good += diff[i] - 1;
        else if(diff[i] == 1) good ++;
        moreInfected += 4;

        // cerr << good << nl;
    }
    
    // cerr << "#" << tot_n << nl;
    // cout << good << nl;
    cout << tot_n - good << nl;
}
int32_t main()
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