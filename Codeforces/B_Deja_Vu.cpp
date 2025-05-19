// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n), x(q);
    for(auto &e : a) cin >> e;
    for(auto &e : x) cin >> e;

    
    set<int> st; vector<int> vec;
    for(auto e : x) 
    {
        // reducing tot op O(q) to max. O(30)
        if(!st.count(e)) vec.push_back(e);
        st.insert(e);   
    }

    // TLE O(n * n)
    // for(auto e : x) 
    // {
    //     int data = pow(2, e);

    //     for(auto &val : a) 
    //     {
    //         if(val%data == 0) val += pow(2, e-1);    
    //     }
    // }
    
    // O(n * 30)
    for (int i = 0; i < vec.size(); i++)
    {
        int data = pow(2, vec[i]);
        for (int j = 0; j < n; j++)
        {
            if(st.count(vec[i]) && a[j] % data == 0) a[j] += pow(2, vec[i]-1);
        }
    }
 
    print(a);
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