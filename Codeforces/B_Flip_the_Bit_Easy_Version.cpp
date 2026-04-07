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

    int idx; cin >> idx; idx--;

    int cost = 0;
    if(a[idx] != k) 
    {
        a[idx] = k; cost++;
    }

    int left = 0, right = 0;

    int prev = a[idx];
    for (int i = idx - 1; i >= 0; i--)
    {
        if(a[i] != prev) left++;

        prev = a[i];
    }
    
    prev = a[idx];
    for (int i = idx + 1; i < n; i++)
    {
        if(a[i] != prev) right++;

        prev = a[i];
    }

    int kombe = 0;

    for (int i = 0; i < idx; i++)
    {
        if(a[i] == k) kombe++;
        break; 
    }
    for (int i = n - 1; i > idx; i--)
    {
        if(a[i] == k) kombe++;
        break; 
    }

    cout << max(left, right) + cost - (abs(left - right) % 2 == 1) << nl;
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