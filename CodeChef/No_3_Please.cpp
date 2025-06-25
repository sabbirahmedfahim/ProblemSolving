#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int sum = accumulate(all(a), 0);

    if(sum%3 == 0) 
    {
        int x = a[0], y = -1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != x) y = i;
        }
        
        if(y == -1)
        {
            cout << "No" << nl; return;
        }

        int sum = 0;
        for (int i = y; i >= 0; i--)
        {
            sum += a[i];
            if(sum%3 == 0)
            {
                cout << "No" << nl; return;
            }
        }
        for (int i = y + 1; i < n; i++)
        {
            sum += a[i];
            if(sum%3 == 0)
            {
                cout << "No" << nl; return;
            }
        }
        cout << "Yes" << nl;
        return;
    }

    sum = 0;
    int x, y, z = -1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum%3 == 0)
        {
            x = a[i]; y = i;
        }
    }
    for (int i = y + 1; i < n; i++)
    {
        if(a[i] != x) z = i;
    }

    if(z == -1)
    {
        cout << "No" << nl; return;
    }

    sum = 0;
    for (int i = y; i >= 0; i--)
    {
        sum += a[i];
        if(sum%3 == 0)
        {
            cout << "No" << nl; return;
        }
    }
    
    for (int i = y + 1; i < n; i++)
    {
        sum += a[i];
        if(sum%3 == 0)
        {
            cout << "No" << nl; return;
        }
    }
    

    cout << "Yes" << nl;
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