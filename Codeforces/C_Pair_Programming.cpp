// used hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int k, n, m; cin >> k >> n >> m;
    deque<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    vector<int> res;

    while (!a.empty() || !b.empty())
    {
        if(!a.empty() && a.front() <= k)
        {
            res.push_back(a.front());
            if(a.front() == 0) k++;
            a.pop_front(); 
        }
        else if(!b.empty() && b.front() <= k)
        {
            res.push_back(b.front());
            if(b.front() == 0) k++;
            b.pop_front();
        }
        if((!a.empty() && a.front() <= k) || (!b.empty() && b.front() <= k));
        else break;
    }
    
    while (!a.empty())
    {
        if(a.front() > k) break;
        res.push_back(a.front());
        a.pop_front();
    }
    while (!b.empty())
    {
        if(b.front() > k) break;
        res.push_back(b.front());
        b.pop_front();
    }

    // if(a.empty() && b.empty()) cout << "have answer" << nl;
    // else 
    // {
    //     // print(a); print(b);
    //     cout << -1 << nl;
    // }
    if(a.empty() && b.empty())
    {
        print(res);
    }
    else cout << -1 << nl;
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