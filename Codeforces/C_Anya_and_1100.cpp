#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    string s; cin >> s;
    int q; cin >> q;

    set<int> st;
    for (int i = 0; i < s.size()-3; i++)
    {
        if(s.substr(i, 4) == "1100") st.insert(i);
    }
    
    while (q--)
    {
        int idx, v; cin >> idx >> v;
        idx--;
        s[idx] = '0' + v;
        bool isFound = false;
        if(s.size() < 4) cout << "NO" << nl;
        else
        {
            for (int i = 0; i < s.size()-3; i++)
            {
                if(s.substr(i, 4) == "1100")
                {
                    isFound = true; break;
                }
            }
            // cout << s << nl;
            if(isFound) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}