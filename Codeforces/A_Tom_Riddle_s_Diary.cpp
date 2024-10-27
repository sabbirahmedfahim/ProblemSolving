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

    int n; cin >> n; 
    map<string, int> mp;
    while (n--)
    {
        string s; cin >> s;
        cout << ((mp[s] != 0)? "YES" : "NO") << nl;
        mp[s]++;
    }

    return 0;
}