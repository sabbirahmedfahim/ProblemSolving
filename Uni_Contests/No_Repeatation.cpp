#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string x; cin >> x;

    string s = x;
    // for(auto e : x)
    // {
    //     if(e == '\"') continue;
    //     else s += e;
    // }

    int res = 0;
    set<int> st;
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if(!st.count(s[i]))
        {
            st.insert(s[i]);
            res = max(res, i - j + 1);
        }
        else 
        {
            while (j < s.size() && j <= i && s[i] != s[j])
            {
                st.erase(s[j]);
                j++;
            }
            j++;
            if(j < s.size()) res = max(res, i - j + 1);
        }
    }
    
    cout << res << nl;

    return 0;
}