#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    if(n == 1)
    {
        cout << 1 << nl; return;
    }
    
    sort(all(a));
    set<int> s;
    for(auto e : a) s.insert(e);

    vector<int> afterSubs;
    for (int i = 0; i < n-1; i++)
    {
        afterSubs.push_back(a.back()-a[i]);
    }
    // print(afterSubs);

    int GCD = 0;
    for(auto e : afterSubs) GCD = __gcd(GCD, e);
    // cout << GCD << nl;

    ll cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        cnt += (afterSubs[i]/GCD);
    }
    // cout << cnt << nl;

    // add extra value
    int who = a.back() - GCD;
    int incre = 1;
    while (1)
    {
        if(s.count(who))
        {
            who -= GCD;
            incre++;
        }
        else 
        {
            cout << cnt + incre << nl; return;
        }
    }
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