#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> st;
    for(auto e : a) st.insert(e);

    if(k < st.size())
    {
        cout << -1 << nl; return;
    }

    // cout << "have ans" << nl;
    deque<int> ans, ans2;
    int tmp = k;
    while (tmp)
    {
        for(auto e : st)
        {
            ans.push_back(e); ans2.push_back(e);
            tmp--;

            if(tmp == 0) break;
        }
    }
    // print(ans);
    int sum = 0;
    for(auto e : ans) sum += e;
    int curr = sum;

    for (int i = 0; i < 100; i++)
    {
        for(auto e : st)
        {
            if(ans2.size() >= 10000) break;

            curr -= ans.front(); ans.pop_front();
            int need = sum - curr;
            if(st.count(need))
            {
                ans.push_back(need);
                ans2.push_back(need);
                curr += need;
            }
            else 
            {
                cout << -1 << nl; return;
            }
        }

        if(ans2.size() >= 10000) break;
    }
    
    cout << ans2.size() << nl;
    print(ans2);
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}