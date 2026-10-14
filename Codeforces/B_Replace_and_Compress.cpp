#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    int tinTaShoman = 0, ekhtaMaje = 0;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if(s[i] == s[i + 1] && s[i + 1] == s[i + 2]) 
        {
            tinTaShoman++; break;
        }
    }
    for (int i = 0; i < s.size() - 2; i++)
    {
        if(s[i] == s[i + 2] && s[i] != s[i + 1]) 
        {
            ekhtaMaje++; break;
        }
    }

    // cerr << tinTaShoman << " " << ekhtaMaje << nl;
    cout << 1 + tinTaShoman + ekhtaMaje << nl;
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