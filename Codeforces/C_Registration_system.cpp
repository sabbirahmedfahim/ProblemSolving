#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int t; cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s; cin >> s;
        if(mp.find(s) == mp.end()) 
        {
            mp[s]++;
            cout << "OK" << nl;
        }
        else 
        {
            cout << s << mp[s] << nl;
            mp[s]++;
        }
    }

    return 0;
}
