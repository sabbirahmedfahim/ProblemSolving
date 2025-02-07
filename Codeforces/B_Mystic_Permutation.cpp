#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
Hints: n-2 porjonto loop chaliye kora jabe, last 2 ta manually check korbo
*/
void solve()
{
    int n; cin >> n; 
    if(n == 1) // edge case
    {
        int x; cin >> x; // array input
        // cin.ignore(); // array input [wait, why it did not work??]
        cout << -1 << nl; return; 
    }
    
    vector<int> v(n+1), ans;
    set<int> st; 
    for (int i = 1; i <= n; i++) 
    {
        cin >> v[i];
        st.insert(v[i]);    
    }   

    for (int i = 1; i <= n-2; i++)
    {
        for(auto &data : st)
        {
            if(v[i] != data)
            {
                ans.push_back(data); st.erase(data); break;
            }
        }
    }

    // print(ans);
    // print(st);
    if(v[n-1] != *st.begin() && v[n] != *--st.end()) 
    {
        ans.push_back(*st.begin()); ans.push_back(*--st.end());
    }
    else
    {
        ans.push_back(*--st.end()); ans.push_back(*st.begin()); 
    }
    print(ans);
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