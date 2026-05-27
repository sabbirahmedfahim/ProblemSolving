#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &e : v) cin >> e;

    map<int, int> mp;
    for(auto e : v) mp[e]++;

    bool isMatch = true;
    for(auto [key, val] : mp)
    {
        if(key == 0) continue;
        if(val & 1)
        {
            isMatch = false; break;
        }
    }

    if(isMatch) 
    {
        cout << 1 << nl; return;
    }

    ll extraVal = 0, Dup = 0;
    for(auto [key, val] : mp)
    {
        if(key == 0) 
        {
            Dup = 1;
            continue;
        }
        if(val & 1) extraVal += 1;
        else Dup = 1;
    }

    cout << max(1ll, extraVal + Dup) << nl;
}
void solve2()
{
    int n; cin >> n; 
    deque<int> dq(n); for(auto &e : dq) cin >> e;

    sort(all(dq));

    // last er duita mile kina, jodi mile, push front -> 0
    // jodi na mile, pop back ekta

    int mileNai = 0;
    set<int> s;
    while (dq.size() >= 2)
    {
        int x = dq.back();
        dq.pop_back();

        int y = dq.back();
        if(x == y) // milse
        {
            dq.pop_back();
            dq.push_front(0);
        }
        else s.insert(x);
    }

    if(dq.front() != dq.back())
    {
        s.insert(dq.front());
        s.insert(dq.back());
    }
    else s.insert(dq.front());

    // print(s);
    cout << s.size() << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        // solve();
        solve2();
    }

    return 0;
}