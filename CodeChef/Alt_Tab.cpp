#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n; cin >> n;
    deque<string> dq;
    map<string, int> mp;
    while (n--)
    {
        string s; cin >> s;
        dq.push_front(s);
        mp[s]++;
    }
    for(auto data : dq)
    {
        if(mp.count(data))
        {
            int sz = data.size();
            cout << data[sz-2] << data[sz-1];
            mp.erase(data);
        }
    }
    

    return 0;
}