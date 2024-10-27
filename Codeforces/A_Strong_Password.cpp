#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    string s; cin >> s;
    map<char, int> mp;
    int mx = -1;
    int pos = -1;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        if(mp[s[i]] > mx) 
        {
            pos = i;
            mx = mp[s[i]];
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(mp[s[i]] == 0) 
        {
            // cout << pos << " ";
            s.insert(pos, 1, i+'a'); break;
        }
    }
    cout << s << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}