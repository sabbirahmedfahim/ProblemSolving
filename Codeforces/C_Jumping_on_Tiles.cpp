#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
    tc-1:
    logic
    l -> ~o~ i, g <- c
    tc-2:
    codeforces
     23456789
    c -> c, d, e, e, f, o, o, r <- s
    tc-5:
    adbaadabad
     23456789
    a -> 4, 5, 7, 9, 3, 8, 2, 6 <- d
*/
bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
void solve()
{
    // for (int i = 0; i < 26; i++)
    // {
    //     char ch = (char) (i+'a');
    //     cout << ch << " -> " << ch - 96 << nl;
    // }
    string s, s2; cin >> s; 
    int dis = 0; 
    string tmp;
    for (int i = 1; i < s.size()-2; i++)
    {
        if(s[0] < s.back() && s[i] < s[0] || s[i] > s.back()) continue;
        if(s[0] > s.back() && s[i] > s[0] || s[i] < s.back()) continue;
        tmp.push_back(s[i]);
    }
    if(s[0] < s.back()) sort(all(tmp));
    else sort(tmp.rbegin(), tmp.rend());
    s2.push_back(s[0]); if(!tmp.empty()) s2 += tmp; s2.push_back(s.back());
    
    for (int i = 0; i < s2.size()-1; i++)
    {
        int l = (int) s2[i], r = (int) s2[i+1];
        dis += abs(l-r);
    }
    // cout << s2 << nl;

    vector<pair<int, int>> p;
    for (int i = 1; i < s.size()-1; i++)
    {
        if(s[0] > s.back()) 
        {
            if(s[i] > s[0] || s[i] < s.back()) continue;
            int n = (int) s[i] - 96;
            p.push_back({n, i+1});
        }
        else 
        {
            if(s[i] < s[0] || s[i] > s.back()) continue;
            int n = (int) s[i] - 96;
            p.push_back({n, i+1});
        }
    }
    // sort(p.begin(), p.end(), cmp);
    if(s[0] < s.back()) sort(all(p), cmp);
    else sort(p.rbegin(), p.rend(), cmp);

    cout << dis << " " << p.size() + 2 << nl;
    cout << 1 << " ";
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].second << " ";
    }
    cout << s.size();
    cout << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}