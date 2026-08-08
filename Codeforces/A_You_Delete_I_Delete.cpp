#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    string x;
    bool touch = false;
    for(auto e : s)
    {
        if(e == '0' && touch == false) touch = true;
        else x.push_back(e);
    }

    s.clear();
    touch = false;
    for(auto e : x)
    {
        if(e == '1' && touch == false) touch = true;
        else s.push_back(e);
    }

    cout << s << nl;
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