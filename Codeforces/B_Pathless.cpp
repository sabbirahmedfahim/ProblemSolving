#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, s; cin >> n >> s;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    int tot_sum = accumulate(all(a), 0);

    int freq[3] = {0};
    for(auto e : a) 
    {
        freq[e]++;
    }

    if(freq[1] > (freq[2] + 1) && s > tot_sum)
    {
        cout << -1 << nl; return;
    }

    if(s < tot_sum)
    {
        cout << -1 << nl; return;
    }

    sort(all(a)); reverse(all(a));
    print(a);
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