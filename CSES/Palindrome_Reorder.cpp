#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    map<char, int> mp; for(auto data : s) mp[data]++;
    int odd = 0;
    char c; 
    for(auto [key, val] : mp) 
    {
        if(val%2) 
        {
            odd++; c += key;
        }
    }

    if((s.size()%2 == 0 && odd > 0) || (s.size()%2 && odd > 1)) cout << "NO SOLUTION" << nl;
    else 
    {
        deque<char> dq;
        if(s.size()%2) 
        {
            dq.push_back(c); mp[c]--;
        }
        for(auto [key, val] : mp)
        {
            while (1)
            {
                if(mp[key]%2 == 0 && mp[key] != 0) dq.push_front(key);
                else if(mp[key]%2) dq.push_back(key);
                else break;
                mp[key]--;
            }
        }
        for(auto data : dq) cout << data; cout << nl;
    }

    return 0;
}