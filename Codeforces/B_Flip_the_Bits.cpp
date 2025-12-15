// took only very minimal hints. if it works, i would be happy
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string x, y; cin >> x >> y;
    vector<bool> paritySame(n, false);

    int one = 0, zero = 0;
    int lastSame = -1;
    for (int i = 0; i < n; i++)
    {
        if(y[i] == '0') zero++;
        else one++;

        if(zero == one) 
        {
            paritySame[i] = true;
            lastSame = i;
        }
    }

    // if(lastSame == -1)
    // {
    //     cout << "NO" << nl;
    //     return;
    // }
    for (int i = lastSame + 1; i < n; i++)
    {
        if(x[i] != y[i])
        {
            cout << "NO" << nl; return;
        }
    }
    

    int same = 0, notSame = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        if(x[r] == y[r]) same++;
        else notSame++;

        if(paritySame[r] == true)
        {
            int len = r - l + 1;
            if(same == len || notSame == len)
            {
                same = 0, notSame = 0;
            }
            else 
            {
                cout << "NO" << nl;
                return;
            }

            l = r + 1;
        }
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