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

    map<string, string> mp;
    int n, m; cin >> n >> m;
    while (n--)
    {
        string s1, s2; cin >> s1 >> s2;
        mp[s2] = s1;
    }
    while (m--)
    {
        string s1, s2; cin >> s1 >> s2;
        s2.pop_back();
        cout << s1 << " " << s2 << ";" << " " << "#" << mp[s2] << nl;
    }
    
    return 0;
}