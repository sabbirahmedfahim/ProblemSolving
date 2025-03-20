#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        mp[data]++;
    }

    if(mp.size() == 1) cout << "Yes" << nl;
    else if(mp.size() > 2) cout << "No" << nl;
    else 
    {
        int a = -1, b = -1;
        for(auto [key, val] : mp)
        {
            if(a == -1) a = val;
            else b = val;
        }
        // cout << a << " " << b << nl;
        if(abs(a-b) <= 1) cout << "Yes" << nl;
        else cout << "No" << nl;
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