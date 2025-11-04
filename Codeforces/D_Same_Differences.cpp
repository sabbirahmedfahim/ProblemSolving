#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
   a[j] - a[i] = j - i
=> a[j] - j = a[i] - i

*/
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    map<int, int> freq;
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(freq.count(a[i] - i)) cnt += freq[a[i] - i];

        freq[a[i] - i]++;
    }
    cout << cnt << nl;
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