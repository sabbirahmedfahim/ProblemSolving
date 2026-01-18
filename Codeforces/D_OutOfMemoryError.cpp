#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, h; cin >> n >> m >> h;
    vector<int> a(n + 1);

    map<int, int> LastReset;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        LastReset[i] = false;
    }
    vector<int> realA = a;
    int currResetIdx = 0;

    for (int i = 1; i <= m; i++)
    {
        // cerr << i << " --> ";
        int idx, data; cin >> idx >> data;
    
        if(currResetIdx > LastReset[idx])
        {
            LastReset[idx] = i;
    
            a[idx] = realA[idx] + data;
            if(a[idx] > h) 
            {
                a[idx] = realA[idx];
                currResetIdx = i;
            }
        }
        else 
        {
            a[idx] += data;
            // LastReset[idx] = i;
    
            if(a[idx] > h) 
            {
                LastReset[idx] = i;
    
                a[idx] = realA[idx];
                currResetIdx = i;
            }
        }
    
        // cerr << currResetIdx << nl;
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << nl;
    }

    // cerr << currResetIdx << nl;

    for (int i = 1; i <= n; i++)
    {
        if(currResetIdx > LastReset[i])
        {
            a[i] = realA[i];
        }
        if(a[i] > h) // dbg...
        {
            while (1)
            {
                ;
            }
            
        }
    }
    
    
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}