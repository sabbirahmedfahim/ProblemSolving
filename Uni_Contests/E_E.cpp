#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    
    map<char, set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]].insert(i);
    }
    
    int q; cin >> q;
    while (q--)
    {
        string ss; cin >> ss;
        deque<char> dq;
        for(auto e : ss) dq.push_back(e);
        // print(dq);

        int currIdx = 0;
        for (int i = 0; i < s.size() && !dq.empty(); i++)
        {
            char ch = dq.front();
            auto it = mp[ch].lower_bound(currIdx);
            if(it != mp[ch].end())
            {
                currIdx = *it; currIdx++;
                // mp[ch].erase(it);
                dq.pop_front();
            }
            else break;
            // cerr << currIdx << nl;
        }
        
        if(dq.empty()) cout << "YES" << nl;
        else cout << "NO" << nl;
        // print(dq);
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}