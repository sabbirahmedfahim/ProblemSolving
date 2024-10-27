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

    string s; cin >> s;
    map<char, int> mp;
    
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(mp[i] == 0)
        {
            cout << (char) (i + 'a') << nl; return 0;
        }
    }
    cout << "None" << nl;

    return 0;
}