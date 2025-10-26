#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    deque<int> a(n);
    for(auto &e : a) cin >> e;
    map<int, int> idx;
    for (int i = 0; i < n; i++)
    {
        idx[a[i]] = i + 1;
    }

    int curr_mn = 1, curr_mx = n;

    // while (!a.empty() && (a.front() == curr_mn || a.front == curr_mx || a.back() == curr_mn || a.back() == curr_mx))
    while (!a.empty())
    {
        if(a.front() == curr_mn)
        {
            curr_mn ++; a.pop_front();
        }
        else if(a.front() == curr_mx)
        {
            curr_mx--; a.pop_front();
        }
        else if(a.back() == curr_mn)
        {
            curr_mn ++; a.pop_back();
        }
        else if(a.back() == curr_mx)
        {
            curr_mx --; a.pop_back();
        }
        else break;
    }
    
    if(a.empty()) cout << -1 << nl;
    else cout << idx[a.front()] << " " << idx[a.back()] << nl;
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