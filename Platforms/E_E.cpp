#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
// find the minimum possible value -_-
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; string s; cin >> n >> k >> s;
    map<char, int> mp;
    for(auto data : s) mp[data]++;
    // for(auto [key, val] : mp) cout << key << " " << val << nl; cout << nl;
    while (k--)
    {
        mp[mp.rbegin()->first]--;
        if(mp[mp.rbegin()->first == 0]) mp.erase(mp.rbegin()->first);
        mp[mp.begin()->first]++;
    }
    for(auto &[key, val] : mp)
    {
        if(val == 0) mp.erase(mp[key]);
    }
    // for(auto [key, val] : mp) cout << key << " " << val << nl; cout << nl;

    deque<char> dq;
    for(auto [key,val] : mp)
    {
        for (int i = 0; i < val; i++)
        {
            dq.push_back(key);
        }
    }
    print(dq);

    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string myString;
        for(auto data : dq) myString += data;
        if(!st.count(myString)) st.insert(myString);
        char tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);
    }

    // print(st);
    cout << st.size() << nl;
    

    return 0;
}