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
    int tot_neg = 0, tot_pos = 0;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0) a[i] = -1, tot_neg++;
        else a[i] = 3, tot_pos += 2;
    }
    
    if(n % 2 == 0)
    {
        a[n-1] = 2;
    }

    print(a);
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