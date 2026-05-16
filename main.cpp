#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    map<int, int> mp;
    for (int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    
    if(n > 1) mp[n]++;

    // if(mp.empty()) mp[n]++;

    int m = 1;
    for(auto [x, y] : mp)
    {
        if(y & 1) m *= x;
    }

    cout << m << nl;
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