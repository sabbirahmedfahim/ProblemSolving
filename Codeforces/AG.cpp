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
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<vector<int>> v;
    map<int, int> mp;
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        if(st.empty())
        {
            v.push_back({a[i]});
            // mp[v[0]] = a[i];
            mp[a[i]] = v.size() - 1;
            st.insert(a[i]);
        }
        else 
        {
            auto it = st.upper_bound(a[i]);
            if(it == st.begin())
            {
                v.push_back({a[i]});
                // mp[v.size() - 1] = a[i];
                mp[a[i]] = v.size() - 1;
                st.insert(a[i]);
            }
            else
            {
                it--;
                st.insert(a[i]);

                int whichGroup = mp[*it];
                v[whichGroup].push_back(a[i]);
                mp[a[i]] = whichGroup;

                st.erase(it);
            }
        }
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << nl;
    }
    

    return 0;
}