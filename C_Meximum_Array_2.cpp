#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k, q; cin >> n >> k >> q;
    vector<pair<int, int>> MEXhobe, mnHobe;
    while (q--)
    {
        int c, l, r; cin >> c >> l >> r;
        l--, r--;

        if(c == 1) mnHobe.push_back({l, r});
        else MEXhobe.push_back({l, r});
    }
    
    vector<int> kBoshbe(n, 0), MEXboshbe(n, 0);
    for(auto [l, r] : mnHobe)
    {
        for (int i = l; i <= r; i++)
        {
            kBoshbe[i]++;
        }
    }
    
    int lMn = 1E5, rMx = -1;
    for(auto [l, r] : MEXhobe)
    {
        for (int i = l; i <= r; i++)
        {
            MEXboshbe[i]++;
        }
        lMn = min(lMn, l);
        rMx = max(rMx, r);
    }
    
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if(kBoshbe[i] && MEXboshbe[i]) res.push_back(k + 1);
        else if(kBoshbe[i]) res.push_back(k);
        else if(MEXboshbe[i]) res.push_back(-1);
        else res.push_back(1);
    }

    vector<int> koyta;
    for (int i = 0; i < n; i++)
    {
        if(MEXboshbe[i] && kBoshbe[i] == 0) koyta.push_back(MEXboshbe[i]);
    }
    sort(all(koyta)); 
    map<int,int> mp; set<int> st;
    for(auto e : koyta) 
    {
        mp[e]++; st.insert(e);
    }
    koyta.clear();
    for(auto e : st) koyta.push_back(e);

    int curr = 0;
    while (!koyta.empty())
    {
        if(curr > k) curr = k - 1;
        for (int i = 0; i < n; i++)
        {
            if(MEXboshbe[i] == koyta.back() && kBoshbe[i] == 0) 
            {
                if(curr == k) curr--;
                res[i] = curr++;
            }
        }
        
        koyta.pop_back(); 
    }
    
    set<int> need, tmp;
    for (int i = 0; i < k; i++)
    {
        need.insert(i);
    }
    tmp = need;
    
    if(lMn != 1E5)
    {
        set<int> have;
        for (int i = lMn; i <= rMx; i++)
        {
            if(have.count(res[i])) 
            {
                have.insert(res[i]); need.erase(res[i]);
            }
            if(i + k - 1 < n)
            {
                if(have != need)
                {
                    res[i] = *need.begin(); 
                }
            }
        }
        
    }

    print(res);
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