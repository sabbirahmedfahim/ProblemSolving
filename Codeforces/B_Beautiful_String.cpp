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

    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') vec.push_back(i + 1);
    }
    
    if(vec.empty())
    {
        cout << 0 << nl << nl;
    }
    else
    {
        cout << vec.size() << nl;
        print(vec);
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