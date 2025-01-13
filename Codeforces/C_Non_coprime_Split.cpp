// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int l, r; cin >> l >> r;

    if(r < 4)
    {
        cout << -1 << nl; return;
    }

    if(l != r)
    {
        if(r%2 == 1) r--; 
        cout << r-2 << " " << 2 << nl;
        return;
    }
    else
    {
        if(l%2 == 0) 
        {
            cout << l-2 << " " << 2 << nl; return;
        }
        else 
        {
            for (int i = 3; i*i <= l; i+=2)
            {
                if(l%i == 0)
                {
                    cout << i << " " << l-i << nl; return;
                }
            }
        }
    }

    cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << "tc-" << i << " : ";
        solve();
    }
    

    return 0;
}