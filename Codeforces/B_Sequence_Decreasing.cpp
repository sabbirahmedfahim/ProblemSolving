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

    // zero remove kore dibo array theke??

    vector<bool> vis(n, false);

    for (int i = 0; i < n - 1; )
    {
        if(vis[i] == true) continue;

        if(a[i] == 0) 
        {
            vis[i] = true; i++; continue;
        }

        if(a[i] == a[i + 1])
        {
            vis[i] = true; vis[i + 1] = true;

            int data = a[i];

            int idx = i - 1;
            // cerr << idx << nl;
            while (idx >= 0 && data && vis[idx] == false)
            {
                // cerr << idx << nl;
                if(a[idx] == 0) break;

                vis[idx] = true;
                idx--; data--; 
            }
            
            while (i < n - 1 && a[i] == a[i + 1])
            {
                i++;
            }

            i++;

            idx = i;
            while (idx < n && data && vis[idx] == false)
            {
                // cerr << idx << nl;
                if(a[idx] == 0) break;

                vis[idx] = true;
                idx++; data--; 
            }
        }
        else i++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] == 0 && vis[i + 1] == false) vis[i + 1] = true;
        if(a[i + 1] == 0 && vis[i] == false) vis[i] = true;
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(vis[i] || a[i] == 0) 
        {
            // cerr << i << " ";
            cnt++;
        }
    }
    
    cout << cnt << nl;
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