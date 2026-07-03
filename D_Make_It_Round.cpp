#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, m; cin >> n >> m;

    ll mul = n * m;
    string s = to_string(mul);
    // cout << s << nl;

    bool haveAns = false; ll who;
    for (int i = s.size() - 1; i > 0; i--)
    {
        s[i] = '0';
        ll ok = stoll(s);
        // cerr << ok << nl;

        if(ok % n == 0)
        {
            haveAns = true;
            who = ok;
        }
        char curr = s[0];
        while (curr >= '1')
        {
            string tmp = s; tmp[0] = curr;
            ok = stoll(tmp);
            if(ok % n == 0)
            {
                if(haveAns) who = ok;
                else
                {
                    haveAns = true;
                    who = ok;
                }
            }

            curr--;
        }
        
    }

    if(haveAns) 
    {
        cout << who << nl; return;
    }
    
    while (s.size() > 1)
    {
        s.pop_back();

        ll ok = stoll(s);
    
        if(ok % n == 0)
        {
            ll res = ok % n;
            cout << res << nl;
            return;
        }
    }
    
    
    cout << mul << nl;
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