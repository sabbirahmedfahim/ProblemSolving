#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll a, b; cin >> a >> b;

    if(a == b)
    {
        cout << 0 << nl; return;
    }

    int cnt = 0;
    bool jemonAche = (a>b);
    while (1)
    {
        if(jemonAche)
        {
            cnt++;
            for (int i = 0; i < 3; i++)
            {
                if(a > b && !(a & 1)) a >>= 1; 
                else 
                {
                    cout << -1 << nl; return;
                }

                if(a == b)
                {
                    cout << cnt << nl; return;
                }
            }
        }
        else 
        {
            cnt++;
            for (int i = 0; i < 3; i++)
            {
                if(a < b) a <<= 1;
                else 
                {
                    cout << -1 << nl; return;
                }   

                if(a == b)
                {
                    cout << cnt << nl; return;
                }
            }
        }
    }
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