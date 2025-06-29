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
    vector<int> a(n); for(auto &e : a) cin >> e;
 
    int res = 0;
    set<int> st;
    map<int, int> mp;
    for (int l = 0, r = 0; l <= r && r < n; r++)
    {
        mp[a[r]]++;

        if(st.count(a[r]))
        {
            while (a[l] != a[r])
            {
                mp[a[l]]--;
                if(mp[a[l]] == 0)
                {
                    mp.erase(a[l]); st.erase(a[l]);
                }
                l++;
            }
        }
        else 
        {
            st.insert(a[r]); 
        }

        res = max(res, (int) st.size());
    }
    
    
    cout << res << nl;
 
    return 0;
}