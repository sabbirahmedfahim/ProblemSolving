#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    string res;
    for (int i = 0; i < n; i++)
    {
        if(i+3 < n && s[i+2] != 'a' && s[i+2] != 'e' && s[i+3] != 'a' && s[i+3] != 'e')
        {
            res += s.substr(i, 3);
            i += 2;
            res += '.';
        }
        else 
        {
            res += s.substr(i, 2);
            i += 1;
            res += '.';
        }
    }
    
    res.pop_back();
    int x = res.size();
    if(res[x-2] == '.')
    {
        char tmp = res.back();
        res.pop_back(); res.pop_back();
        res.push_back(tmp);
    }
    cout << res << nl;
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