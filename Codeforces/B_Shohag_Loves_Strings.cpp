// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    // edge cases
    if(s.size() == 1)
    {
        cout << -1 << nl; return;
    }
    if(s.size() == 2)
    {
        if(s[0] == s[1]) cout << s << nl;
        else cout << -1 << nl;
        return;
    }

    // is there any consecutive matched characters
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i + 1])
        {
            cout << s[i] << s[i + 1] << nl; return;
        }
    }
    
    // now deal with abc, there are no consecutive matched characters
    for (int i = 0; i < s.size() - 2; i++)
    {
        set<char> x;
        x.insert(s[i]);
        x.insert(s[i + 1]);
        x.insert(s[i + 2]);
        if(x.size() == 3)
        {
            cout << s[i] << s[i + 1] << s[i + 2] << nl; return;
        }
    }
    
    cout << -1 << nl;
}
void check_sol()
{
    // string s = "abc";
    string s = "abab";
    // string s = "abababab";
    set<string> st;
    for (int i = 0; i < (1<<s.size()); i++)
    {
        string x;
        for (int k = 0; k < s.size(); k++)
        {
            if((i>>k) & 1) x += s[k];
        }
        if(!x.empty() && s.find(x) != -1) st.insert(x);
    }
    cout << st.size() << nl;
    // print(st);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // check_sol();

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}

