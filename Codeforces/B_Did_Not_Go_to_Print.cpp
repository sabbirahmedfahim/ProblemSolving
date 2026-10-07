#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    // if 3, then skip

    stack<int> q;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '3') continue;

        if(s[i] == '1') q.push(i + 1);
        else 
        {
            if(!q.empty()) 
            {
                ans.push_back(i + 1); q.pop();
            }
            // else ans.push_back(i + 1);
        }
    }

    while (!q.empty())
    {
        ans.push_back(q.top()); q.pop();
    }
    
    cout << ans.size() << nl; 
    if(!ans.empty())
    {
        sort(all(ans));
        print(ans);
    }
    else cout << nl;
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