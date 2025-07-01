#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    map<char, int> mp;
    for(auto e : s) mp[e]++;

    for(auto [x, y] : mp)
    {
        if(y == 1) continue;

        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.clear();
            if(s[i] == x)
            {
                st.insert(s[i]); i++;
                while (i < s.size() && s[i] != x)
                {
                    st.insert(s[i]);
                    i++;
                }
                if(i == s.size()) break;
                else 
                {
                    if(st.size() == mp.size()) 
                    {
                        i--; continue;
                    }
                    else 
                    {
                        cout << "NO" << nl; return;
                    }
                }
            }
        }
    }
    cout << "YES" << nl;
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