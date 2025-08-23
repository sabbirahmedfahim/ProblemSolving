#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    vector<string> a;

    // cout << (1 << s.size()) << nl; return;

    for (int i = 0; i < (1 << s.size()); i++) // (2^16 * 15)
    {
        string x;
        for (int j = 0; j < s.size(); j++)
        {
            if((i >> j) & 1) x += s[j];
            else x += '0';
        }
        a.push_back(x);

        string arektaX;
        for (char i = '1'; i <= '9'; i++)
        {
            arektaX = i + x;
            if(arektaX.size() <= 18) a.push_back(arektaX);
        }
        
    }
    
    // int cnt = 0;
    vector<ll> res;
    for(auto e : a)
    {
        ll x = stoll(e);
        ll y = stoll(s) - x;
        string xx = to_string(x), yy = to_string(y);

        if(max(x, y) >= 1E18 || (x + y) != stoll(s)) continue;
        if(xx.size() >= yy.size()) continue;
        if(yy.front() == '0') continue;
        if(xx.front() == '0') continue;
        
        bool ok = true;
        for (int i = xx.size(); i < yy.size(); i++)
        {
            if(yy[i] != '0') ok = false;
        }
        if(!ok) continue;

        
        for (int i = 0; i < xx.size(); i++)
        {
            if(xx[i] != yy[i]) ok = false;
        }

        if(max(x, y) == stoll(s)) continue;

        if(!ok) continue;


        // cerr << xx << " --> " << yy << nl;
        
        if(ok) 
        {
            // cnt++;
            res.push_back(stoll(xx));
            // cout << xx << " " << yy << nl;
        }
    }
    // cout << cnt << nl;

    if(res.empty())
    {
        cout << 0 << nl; return;
    }

    set<ll> res2;
    for(auto e : res)
    {
        res2.insert(e);
    }
    // sort(all(res2));
    cout << res2.size() << nl;
    for(auto e : res2)
    {
        cout << e << " ";
    }
    cout << nl;
}
int_fast32_t main()
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