// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int q; cin >> q;
    map<string, int> mp;

    while (q--)
    {
        char cmd; cin >> cmd;
        if(cmd == 'a')
        {
            string s; cin >> s;
            if(!mp.count(s)) 
            {
                mp[s]++; cout << "OK" << nl;
            }
            else
            {
                // cout << s << mp[s] << nl;
                mp[s]++;
                char sz = '/' + mp[s];
                mp[s + sz]++;
                cout << s+sz << nl;
                // // cout << s + sz << nl;
                // cout << mp[s] << " " << sz << " " << mp[s+sz] << " " << s+sz << nl;
            }
        }
        else 
        {
            string s; cin >> s;
            if(mp.count(s)) 
            {
                mp.erase(s); cout << "DELETED" << nl;
            }
            else cout << "INVALID" << nl;
        }
    }
    

    return 0;
}
