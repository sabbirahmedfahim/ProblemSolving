#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
00
11
22
00
...
*/
bool isSame(string &s)
{
    return (s[0] == s[1] && s[1] == s[3] && s[3] == s[4]);
}
void solve()
{
    string s; cin >> s;

    if(s[0] == s[1])
    {
        string ss, sss;
        ss.push_back(s[0]); ss.push_back(s[1]);
        sss.push_back(s[3]); sss.push_back(s[4]);
        int x = stoi(ss), y = stoi(sss);

        if(x >= y) cout << s[0] << s[0] << ":" << s[0] << s[0] << nl;
        else 
        {
            if(x == 0) cout << "11:11" << nl;
            else if(x == 11) cout << "22:22" << nl;
            else cout << "00:00" << nl;
        }
    }
    else 
    {
        string ss, sss;
        ss.push_back(s[0]); ss.push_back(s[1]);
        sss.push_back(s[3]); sss.push_back(s[4]);

        int x = stoi(ss), y = stoi(sss);
        if(x < 11) s[0] = '1', s[1] = '1';
        else if(x < 22) s[0] = '2', s[1] = '2';
        else s[0] = '0', s[1] = '0';

        cout << s[0] << s[0] << ":" << s[0] << s[0] << nl;
    }
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