#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    sort(all(a)); sort(all(b));

    if(a[0] > b[0] || a.back() < b.back())
    {
        cout << "NO" << nl; return;
    }

    if(n < m * 2) 
    {
        cout << "NO" << nl; return;
    }

    // cout << "to do " << nl;

    set<int> B;
    for(auto e : b) B.insert(e);

    for (int i = 0; i < n; i++)
    {
        int data = *B.begin();
        // cerr << data << nl;

        if(data >= a[0] && data <= a[i])
        {
            a[i] = data;
            a[0] = data;
            B.erase(data);
        }

        if(B.empty())
        {
            cout << "YES" << nl; return;
        }
    }
    
    cout << "NO" << nl;
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