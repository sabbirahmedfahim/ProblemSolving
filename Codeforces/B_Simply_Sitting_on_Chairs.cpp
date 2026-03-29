#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    vector<int> vis(n + 1);
    int c1 = 0, c2 = 0;

    for (int i = 1; i <= n; i++)
    {
        if(vis[i] == 0) 
        {
            c1++;
            vis[a[i]] = 1;
        }
        else break;
    }

    for (int i = n; i >= 1; i--)
    {
        if(a[i] <= i) c2++;
    }
    
    
    cout << max(c1, c2) << nl;
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