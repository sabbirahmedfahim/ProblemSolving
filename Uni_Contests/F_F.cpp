#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int cmd; string s; cin >> cmd >> s;
        if(cmd == 1)
        {
            int data; cin >> data; 
            if(mp.count(s)) mp[s] = mp[s] + data;
            else mp[s] = data;
        }
        else if(cmd == 2)
        {
            if(mp.count(s)) mp.erase(s);
        }
        else cout << mp[s] << nl;
    }
    
    return 0;
}