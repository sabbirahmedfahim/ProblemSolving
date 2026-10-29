#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;

    map<char, int> mp;
    for(auto e : s) mp[e]++;

    int mx = 0;
    char who;
    for (char i = '0'; i <= '9'; i++)
    {
        if(mx < mp[i])
        {
            mx = mp[i];
            who = i;
        }
    }
    
    cout << who << nl;

    return 0;
}