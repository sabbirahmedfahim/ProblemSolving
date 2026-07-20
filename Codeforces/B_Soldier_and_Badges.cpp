#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    set<int> st, curr;
    map<int, int> mp;
    for (int i = 1; i <= n + n; i++) st.insert(i);

    for(auto e : a) 
    {
        curr.insert(e);
        mp[e]++;
        if(st.count(e)) st.erase(e);
    }

    int score = 0;
    for(auto [x, y] : mp)
    {
        if(y == 1) continue;
        // cerr << x << " : " <<y<< nl;

        for (int i = 0; i < y - 1; i++)
        {
            auto data = st.upper_bound(x);
            score += *data - x;
            st.erase(data);
        }
    }
    
    cout << score << nl;

    return 0;
}