#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    // cerr << s << nl;

    int lage = 1;
    // for (int i = 0; i < s.size() - 3; i++)
    // {
    //     int need = 0, notNeed = 1E9;

    //     if(s[i] != '2') need++;
    //     if(s[i + 1] != '0') need++;
    //     if(s[i + 2] != '2') need++;
    //     if(s[i + 3] != '6') need++;

    //     lage = min(lage, need);
    // }

    bool found_2025 = false;
    for (int i = 0; i < s.size() - 3; i++)
    {
        string x; 
        x.push_back(s[i]); x.push_back(s[i + 1]);
        x.push_back(s[i + 2]); x.push_back(s[i + 3]);

        if(x == "2026") lage = 0;
        if(x == "2025") found_2025 = true;
    }

    if(found_2025 == false) lage = 0;
    
    cout << lage << nl;
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