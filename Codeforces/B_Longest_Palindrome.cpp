#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    // for(auto e : v) cout << e << nl;

    // find the mirror
    map<string, int> mp, mp2;
    for(auto e : v) mp[e]++;
    deque<string> ans; string extraStr;
    for (int i = 0; i < n; i++)
    {
        string x = v[i];
        string y = x; reverse(all(y));
        if(x == y) // edge case??
        {
            extraStr = x;
            if(mp[x] == 1) mp2[x]++;
            else mp2[x]+=2;
            continue;
        }

        if(mp.count(y) && mp.count(x))
        {
            ans.push_front(x), ans.push_back(y);
            mp[x]--, mp[y]--;
            if(mp[x] == 0) mp.erase(x);
            if(mp[y] == 0) mp.erase(y);
        }
    }
    
    // cout << extraStr << nl;
    string res;
    // cout << ans.size()*m + extraStr.size()*m << nl; // wronng but why
    for (int i = 0; i < ans.size()/2; i++) res += ans[i];
    if(!extraStr.empty()) res += extraStr;
    for (int i = ans.size()/2; i < ans.size(); i++) res += ans[i];

    // cout << res.size() << nl;
    // cout << res << nl;

    string isDupGreater; int cur_mx = res.size();
    for(auto [key, val] : mp2) 
    {
        // cout << key << " " << val << nl;
        if(val > cur_mx)
        {
            isDupGreater = key; cur_mx = val;
        }
    }

    if(res.size() >= cur_mx)
    {
        cout << res.size() << nl;
        cout << res << nl;
    }
    else
    {
        res.clear();
        // cout << cur_mx << nl;
        for (int i = 0; i < cur_mx/m; i++)
        {
            res += isDupGreater;
        }
        cout << res.size() << nl;
        cout << res << nl;
    }

    // cout << nl;
    // print(ans);

    return 0;
}