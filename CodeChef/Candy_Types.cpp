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
    int beshi = 0;
    while (n--)
    {
        int data; cin >> data;
        mp[data]++;

        beshi = max(beshi, mp[data]);
    }
    
    for(auto [x, y] : mp)
    {
        if(y == beshi)
        {
            cout << x << nl; return;
        }
    }
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