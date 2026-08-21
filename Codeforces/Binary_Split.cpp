#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int cnt = count(all(s), '0');

    if(cnt == n || cnt == 0)
    {
        cout << s << nl; return;
    }

    deque<char> ekh, dui;
    for(auto e : s) ekh.push_back(e);
    dui = ekh;

    while (!ekh.empty())
    {
        if(ekh.front() == '0') ekh.pop_front();
        else if(ekh.back() == '1') ekh.pop_back();
        else break;
    }
    while (!dui.empty())
    {
        if(dui.front() == '1') dui.pop_front();
        else if(dui.back() == '0') dui.pop_back();
        else break;
    }

    if(dui.empty() || ekh.empty())
    {
        cout << s << nl; return;
    }

    cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if(s[i - 1] != s[i]) cnt++;
    }
    
    if(cnt > 2)
    {
        cout << "01" << nl; return;
    }

    
    // cout << "rem" << nl; return;
    
    ekh.clear(); dui.clear(); // reset
    for(auto e : s) ekh.push_back(e);
    dui = ekh;

    while (ekh.front() == s.front())
    {
        ekh.pop_front();
    }
    while (dui.back() == s.back())
    {
        dui.pop_back();
    }
    
    string x = "", y = "";
    for(auto e : ekh) x += e;
    for(auto e : dui) y += e;

    cout << min(x, y) << nl;
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