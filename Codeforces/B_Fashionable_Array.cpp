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

    multiset<int> ml; map<int, int> mp, arektaMp; set<int> st;
    for(auto e : a) 
    {
        ml.insert(e); mp[e]++; st.insert(e);
    }
    // print(ml);

    while (!ml.empty())
    {
        auto it = *prev(ml.end());

        for (int i = 0; i < mp[it]; i++)
        {
            cout << it << ' ';
            arektaMp[it]++;
        }
        mp.erase(it); st.erase(it);
        
        // print(ml);
        for(auto e : st)
        {
            while (!ml.empty() && arektaMp[e] < arektaMp[it] && ml.count(e))
            {
                cout << e << ' ';
                ml.erase(ml.find(e));
                mp[e]--;
                arektaMp[e]++;
            }
        }

        ml.erase(it);
    }
    
    cout << nl;
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