#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    set<int> st;
    for(auto e : a) st.insert(e);

    // if(st.size() == 1)
    // {
    //     cout << 1 << nl; return;
    // }

    // vector<int> b = a; reverse(all(b));
    // if(is_sorted(all(a)) || is_sorted(all(b)))
    // {
    //     cout << 2 << nl; return;
    // }

    int who = 1;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] < a[i + 1]) 
        {
            who = 1; cnt = 1; break;
        }
        if(a[i] > a[i + 1]) 
        {
            who = 0; cnt = 1; break;
        }
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        if(who == 1 && a[i] > a[i + 1])
        {
            who = 0; cnt++;
        }
        else if(who == 0 && a[i] < a[i + 1])
        {
            who = 1; cnt++;
        }
    }
    
    cout << cnt + 1 << nl;
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