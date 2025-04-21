#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int zero = 0, one = 0, two = 0, three = 0, five = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0) zero++;
        if(a[i] == 1) one++;
        if(a[i] == 2) two++;
        if(a[i] == 3) three++;
        if(a[i] == 5) five++;

        if(zero >= 3 && one >= 1 && two >= 2 && three >= 1 && 
        five >= 1)
        {
            cout << i + 1 << nl; return;
        }
    }
    
    cout << 0 << nl;
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