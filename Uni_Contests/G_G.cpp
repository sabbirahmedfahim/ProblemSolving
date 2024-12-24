#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q; 
    map<string, int> mp;
    while (n--)
    {
        string s; int data; cin >> s >> data;
        mp[s] = data;
    }
    while (q--)
    {
        int cmd; string s; cin >> cmd >> s;
        if(cmd == 1)
        {
            int data; cin >> data; 
            if(mp.count(s)) mp[s] = mp[s] + data;
            else mp[s] = data;
        }
        else 
        {
            cout << mp[s] << nl;
        }
    }
    
    return 0;
}