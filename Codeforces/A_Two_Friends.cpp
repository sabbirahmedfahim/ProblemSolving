#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation : ans will be 2 or 3
*/
void solve()
{
    int n; cin >> n; vector<int> v(n+1); 
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i]; mp[v[i]] = i;
    }
    // for(auto [key, val] : mp) cout << key << " " << val << nl; cout << nl;
    for (int i = 1; i <= n; i++)
    {
        if(mp[i] == v[i] && mp[v[i]] == i) 
        {
            cout << 2 << nl; return;
        }
    }
    cout << 3 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
