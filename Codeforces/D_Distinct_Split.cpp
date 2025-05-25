#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    set<char> x, y;

    bool x_turn = true;
    int prev_idx_x = -1, prev_idx_y = -1;
    for (int i = 0, j = n-1; i < j;)
    {
        if(x_turn)
        {
            while (i < j && x.count(s[i]))
            {
                i++;
            }
            if(i < j) x.insert(s[i]), prev_idx_x = i;
        }
        else
        {
            while (i < j && y.count(s[j]))
            {
                j--;
            }
            if(i < j) y.insert(s[j]), prev_idx_y = j;
        }

        x_turn = !x_turn;
    }

    // cout << "# " << prev_idx_x << " " << prev_idx_y << nl;

    for (int i = prev_idx_x + 1; i < prev_idx_y; i++)
    {
        x.insert(s[i]); y.insert(s[i]);
    }
    cout << x.size() + y.size() << nl;
}
void solve2()
{
    int n; string s; cin >> n >> s;
    map<char, int> mp;
    for(auto e : s) mp[e]++;

    set<int> st;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if(mp.count(s[i]))
        {
            mp[s[i]]--;
            if(mp[s[i]] == 0) mp.erase(s[i]);
        }
        st.insert(s[i]);

        int sz = st.size() + mp.size();
        mx = max(mx, sz);
    }
    cout  << mx << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // solve2(); // AC 

        solve(); // try
    }

    return 0;
}