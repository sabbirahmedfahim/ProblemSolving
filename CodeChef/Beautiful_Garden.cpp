#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
hints: constraints are really short
*/
void solve()
{
    int n, k, d; cin >> n >> k >> d;
    vector<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a));

    if(n == k)
    {
        cout << 0 << nl; return;
    }

    int sz = n - k;
    vector<int> b;
    for (int i = 0; i < sz; i++)
    {
        b.push_back(a[i]);
    }
    // print(b);

    int res = 0;
    vector<int> tmp = b;

    for (int i = 0; i < b.size() && d > 0;)
    {
        // print(tmp);
        if(tmp[i] == b[i]) 
        {
            res++, tmp[i]--;
        }
        else if(tmp[i] == 0)
        {
            res++, tmp[i] = b[i]-1;
        }
        else tmp[i]--;

        i++;
        if(i == b.size())
        {
            d--, i = 0;
        }
    }
    
    cout << res << nl;
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