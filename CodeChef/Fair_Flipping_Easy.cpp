#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;

    int zero = count(all(s), '0');
    int one = n - zero;
    if(min(zero, one) < k)
    {
        cout << s << nl; return;
    }

    vector<string> st;
    st.push_back(s);

    if(k * 2 == n)
    {
        string currS = s;
    
        int curr = k;
        for (int i = 0; i < n && curr; i++)
        {
            if(s[i] == '0') 
            {
                currS[i] = '1';
                curr--;
            }
        }
        
        
        curr = k;
        for (int i = n - 1; i >= 0 && curr; i--)
        {
            if(s[i] == '1') 
            {
                currS[i] = '0';
                curr--;
            }
        }
        
        s = currS;
        // cerr << s << nl;
        st.push_back(s);
    }
    else 
    {
        sort(all(s)); st.push_back(s);
    }


    cout << *min_element(all(st)) << nl;
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