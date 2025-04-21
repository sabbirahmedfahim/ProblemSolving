#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string real, heard; cin >> real >> heard;
    int n = real.size(), m = heard.size();

    int x, y;
    int i, j;
    for (i = 0, j = 0; i < n && j < m;)
    {
        x = 0, y = 0;
        if(real[i] != heard[j]) 
        {
            cout << "NO" << nl; return;
        }
        char c = real[i];
        // cout << c << nl;

        while (i < n && real[i] == c)
        {
            i++, x++;
            if(real[i] != c)
            {
                // cout << x << nl;
                break;
            }
        }
        while (j < m && heard[j] == c)
        {
            j++, y++;
            if(heard[j] != c)
            {
                // cout << y << nl;
                break;
            }
        }

        // cout << x << " " << y << nl;
        if(x <= y && x*2 >= y);
        else 
        {
            cout << "NO" << nl; return;
        }
    }
    if((i < n && j >= m) || (i >= n && j < m)) 
    {
        cout << "NO" << nl; return;
    }
    cout << "YES" << nl;
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