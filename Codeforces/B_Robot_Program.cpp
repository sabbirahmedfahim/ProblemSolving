#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x, k; string s; cin >> n >> x >> k >> s;

    ll cnt = 0;

    // calculate if is psbl to reach 0th coordinate at first
    for(auto e : s)
    {
        if(e == 'L') x--;
        else x++;
        // cout << x << nl;
        k--;
        if(x == 0)
        {
            cnt = 1; break;
        }
        if(k == 0) break;
    }
    if(cnt == 0 || k == 0)
    {
        cout << cnt << nl; return;
    }

    // is there any sequence of same R, L
    ll l = 0, r = 0, movesForEach = 0;
    bool isPossible = false;
    for(auto e : s)
    {
        if(e == 'L') l++;
        else r++;
        if(l != 0 && l == r)
        {
            isPossible = true;
            break;
        }
        movesForEach++;
    }
    if(!isPossible)
    {
        cout << 1 << nl; return;
    }

    cnt += (k/movesForEach);
    if(cnt & 1) cnt++;

    cout << cnt/2 << nl;
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