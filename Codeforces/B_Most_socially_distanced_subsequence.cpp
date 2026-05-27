#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<int> res;
    res.push_back(a[0]);
    for (int i = 1; i < n - 1; )
    {
        int curr = i;
        if(a[i] > res.back())
        {
            while(i + 1 < n && a[i + 1] > a[i]) i++;
            res.push_back(a[i]); i++;

            // if(i == curr) i++;
        }
        else 
        {
            while(i + 1 < n && a[i + 1] < a[i]) i++;
            res.push_back(a[i]); i++;

            // if(i == curr) i++;
        }
        // cout << i << " --> ";
        // print(res);
    }

    if(res.back() != a.back()) res.push_back(a.back());

    cout << res.size() << nl;
    print(res);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}