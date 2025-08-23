#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y; string a, b; 
    cin >> x >> a >> y >> b;
    deque<char> aa, bb;
    for(auto e : a) aa.push_back(e);
    for(auto e : b) bb.push_back(e);

    string s; cin >> s;
    deque<char> ss; 
    for(auto e : s) ss.push_back(e);

    for(auto e : s)
    {
        if(e == 'D')
        {
            aa.push_back(bb.front()); bb.pop_front();
        }
        else 
        {
            aa.push_front(bb.front()); bb.pop_front();
        }
    }

    for(auto e : aa)
    {
        cout << e;
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