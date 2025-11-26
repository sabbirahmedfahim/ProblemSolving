#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int one = 0;
    for(auto e : a) 
    {
        if(e == 1) one++;
    }
    for(auto e : b) 
    {
        if(e == 1) one++;
    }
    if(one % 2 == 0)
    {
        cout << "Tie" << nl;
        return;
    }

    bool haveTurn = false;
    int who = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            haveTurn = true;
            if(i & 1) who = 2;
            else who = 1;
        }
    }
    
    if(haveTurn)
    {
        if(who == 1) cout << "Ajisai" << nl;
        else cout << "Mai" << nl;
        return;
    }
    else cout << "Tie" << nl;
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