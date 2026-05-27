#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    vector<int> freq(25, 0), L(25, 0), R(25, 0);
    for(auto e : a) freq[e]++;

    bool ok = true;
    for (int i = 1; i <= 20; i++)
    {
        if(i != k && freq[i] > freq[k]) ok = false;
    }
    
    if(ok)
    {
        cout << 0 << nl; return;
    }

    // cout << "1 or 2" << nl;
    int curr = 0, mx = 0;
    ok = false;
    for (int i = 0; i < n; i++)
    {
        L[a[i]]++;
        if(a[i] == k) curr = L[a[i]];
        else mx = max(mx, L[a[i]]);

        if(mx <= curr && curr > 0) ok = true;
    }
    if(ok)
    {
        cout << 1 << nl; return;
    }

    curr = 0, mx = 0;
    ok = false;
    for (int i = n-1; i >= 0; i--)
    {
        R[a[i]]++;
        if(a[i] == k) curr = R[a[i]];
        else mx = max(mx, R[a[i]]);

        if(mx <= curr && curr > 0) ok = true;
    }
    if(ok)
    {
        cout << 1 << nl; return;
    }

    cout << 2 << nl;
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