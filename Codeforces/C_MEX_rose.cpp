#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> freq;

    for(auto e : a) freq[e]++;

    int tot_cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if(!freq.count(i)) tot_cnt++;
    }
    
    tot_cnt = max(tot_cnt, freq[k]);

    cout << tot_cnt << nl;
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