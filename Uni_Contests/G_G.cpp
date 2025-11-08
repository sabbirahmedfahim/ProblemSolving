#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    if(n == 2)
    {
        cout << -1 << nl; return;
    }

    int tot_one = n, tot_zero = 0;

    for (int i = 0; i < n - 2; i++)
    {
        // if(i == 1)
        // {
        //     for (int j = 0; j < n - 1; j++)
        //     {
        //         cout << 0;
        //     }
        //     cout << 0;
        //     cout << nl;
        //     continue;
        // }
        // if(tot_one == 1) 
        // {
        //     cout << 1; tot_zero--;
        // }
        for (int j = 0; j < tot_zero; j++)
        {
            cout << 0;
        }
        for (int j = 0; j < tot_one; j++)
        {
            cout << 1;
        }
        cout << nl;

        // cerr << tot_one << " : " << tot_zero << nl;
        tot_one--; tot_zero++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(i == n - 1) cout << 1;
        else cout << 0;
    }
    cout << nl;
    for (int i = 0; i < n; i++)
    {
        if(i == n - 2) cout << 1;
        else cout << 0;
    }
    cout << nl;
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