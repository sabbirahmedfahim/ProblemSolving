// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;

    vector<int> res(n + 1);
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        int op = (i ^ x);
        if(op >= 1 && op <= n && !st.count(op) && (i | op) == x) 
        {
            res[i] = op; st.insert(op);
        }
        else if((i | x) == x && !st.count(i)) res[i] = i, st.insert(i);
    }
    
    vector<int> have;
    for (int i = 1; i <= n; i++)
    {
        if(!st.count(i)) have.push_back(i);
    }
    
    for (int i = 1; i <= n; i++)
    {
        if(res[i] == 0) res[i] = have.back(), have.pop_back();
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
        // cout << (res[i] | x) << " ";
    }
    cout << nl;
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