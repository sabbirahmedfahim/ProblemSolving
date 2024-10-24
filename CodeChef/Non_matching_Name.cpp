#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    map<char, int> mp;
    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        mp[b[i]]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(mp[i + 'a'] == 0) 
        {
            cout << "Yes" << nl; return;
        }
    }
    cout << "No" << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}