// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        a.push_back(data);
    }
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        b.push_back(data);
    }

    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
    }
    
    sort(v.begin(), v.end());
    vector<int> o, p;
    for(auto [x, y]: v)
    {
        o.push_back(x);
        p.push_back(y);
    }
    print(o);
    print(p);
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