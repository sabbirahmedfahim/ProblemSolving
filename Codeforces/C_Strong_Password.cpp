#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
set<string> allPossibleStr;
void fun(map<int, vector<char>> mp, int idx, string curr)
{
    if(idx == mp.size())
    {
        allPossibleStr.insert(curr); return;
    }

    for(auto e : mp[idx])
    {
        fun(mp, idx + 1, curr + e);
    }
}
void solve()
{
    allPossibleStr.clear();

    string s; cin >> s;
    int m; cin >> m;
    string x, y; cin >> x >> y;

    map<int, vector<char>> mp;

    for (int i = 0; i < m; i++)
    {
        char From = x[i], To = y[i];
        for (char j = From; j <= To; j++)
        {
            mp[i].push_back(j);
        }
    }

    fun(mp, 0, "");
    
    // print(allPossibleStr);

    for(auto e : allPossibleStr)
    {
        deque<char> dq;
        for(auto data : e) dq.push_back(data);

        for(auto data : s) 
        {
            if(dq.front() == data) dq.pop_front();

            if(dq.empty()) break;
        }

        if(!dq.empty())
        {
            cout << "YES" << nl; return;
        }
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