#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int odd = 0, even = 0;
    for(auto e : a) 
    {
        if(e & 1) odd++;
        else even++;
    }

    if(k == 2) // done
    {
        if(even == 0) cout << 1 << nl; 
        else cout << 0 << nl;
    }
    else if(k == 3) // let, ok
    {
        int one = 0;
        for(auto e : a)
        {
            if(e%3 == 0)
            {
                cout << 0 << nl; return;
            }
            if((e+1)%3 == 0) one = 1;
        }
        if(one == 1) cout << 1 << nl;
        else cout << 2 << nl;
    }
    else if(k == 4) // done
    {
        if(even >= 2) cout << 0 << nl;
        else if(even == 1)
        {
            for(auto e : a) 
            {
                if(e%4 == 0)
                {
                    cout << 0 << nl; return;
                }
            }
            cout << 1 << nl;
        }
        else 
        {
            for(auto e : a)
            {
                if((e+1)%4 == 0)
                {
                    cout << 1 << nl; return;
                }
            }
            cout << 2 << nl;
        }
    } 
    else if(k == 5) // done
    {
        int one = 0, two = 0, three = 0;
        for(auto e : a)
        {
            if(e%5 == 0)
            {
                cout << 0 << nl; return;
            }
            if((e+1)%5 == 0) one = 1;
            if((e+2)%5 == 0) two = 1;
            if((e+3)%5 == 0) three = 1;
        }
        if(one) cout << 1 << nl;
        else if(two) cout << 2 << nl;
        else if(three) cout << 3 << nl;
        else cout << 4 << nl;
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