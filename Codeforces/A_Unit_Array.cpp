#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    int one = 0;
    for(auto e : a) if(e == 1) one++;

    int oneLaghbe = n/2 + (n%2);
    int addHobe = 0;
    if(oneLaghbe > one)
    {
        addHobe += oneLaghbe - one;
    }

    int tot = n - addHobe + one;
    if(tot & 1) addHobe++;

    cout << addHobe << nl;
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