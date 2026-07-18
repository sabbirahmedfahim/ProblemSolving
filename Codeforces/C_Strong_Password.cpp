#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    map<char, deque<int>> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]].push_back(i);
    }
    
    int m; cin >> m;
    string x, y; cin >> x >> y; 

    int currIdx = -1;
    for (int i = 0; i < m; i++)
    {
        int mx = currIdx;
        char c;
        for (char ch = x[i]; ch <= y[i]; ch++)
        {
            while (!mp[ch].empty() && currIdx > mp[ch].front())
            {
                mp[ch].pop_front();
            }
            
            if(mp[ch].empty())
            {
                cout << "YES" << nl; return;
            }

            if(mx < mp[ch].front())
            {
                c = ch;
                mx = mp[ch].front();
            }
        }

        if(mx == currIdx)
        {
            cout << "YES" << nl; return;
        }

        currIdx = mx;
        mp[c].pop_front();
        if(mp[c].empty()) mp.erase(c);
    }
    
    cout << "NO" << nl;
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