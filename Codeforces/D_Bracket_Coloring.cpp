// used test case
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    if(n & 1)
    {
        cout << -1 << nl; return;
    }
    int l = 0;
    for(auto e : s) if(e == '(') l++;

    if(l != (n - l))
    {
        cout << -1 << nl;
        return;
    }

    deque<char> tryOneColor;
    deque<pair<char, int>> dq;
    for(auto e : s)
    {
        if(tryOneColor.empty()) tryOneColor.push_back(e);
        else if(tryOneColor.back() != e && e == ')') tryOneColor.pop_back();
        else tryOneColor.push_back(e);
    }
    if(tryOneColor.empty())
    {
        cout << 1 << nl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << nl;

        return;
    }
    tryOneColor.clear();

    for(auto e : s)
    {
        if(tryOneColor.empty()) tryOneColor.push_back(e);
        else if(tryOneColor.back() != e && e == '(') tryOneColor.pop_back();
        else tryOneColor.push_back(e);

    }
    if(tryOneColor.empty())
    {
        cout << 1 << nl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << nl;

        return;
    }


    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '(') dq.push_back({'(', i});
        else if(!dq.empty() && dq.back().first != s[i])
        {
            ans[dq.back().second] = 1;
            ans[i] = 1;
            dq.pop_back();
        }
        else dq.push_back({s[i], i});
    }
    
    while (!dq.empty())
    {
        ans[dq.back().second] = 2;
        dq.pop_back();
    }
    
    // print(ans);
    set<int> st;
    for(auto e : ans) st.insert(e);

    if(st.size() == 1)
    {
        cout << 1 << nl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << nl;
        return;
    }

    cout << 2 << nl;
    print(ans);
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