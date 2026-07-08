#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string x, y; cin >> x >> y;

    deque<char> dq;
    for(auto e : y) dq.push_back(e);
    for(auto e : x)
    {
        if(dq.front() == e) dq.pop_front();
        if(dq.empty()) break;
    }

    if(dq.empty()) 
    {
        cout << "automaton" << nl; return 0;
    }

    map<char, int> mp1, mp2;
    for(auto e : x) mp1[e]++;
    for(auto e : y) mp2[e]++;
    
    bool ok = true, sameE = true;
    for(auto e : y)
    {
        if(mp1[e] < mp2[e]) ok = false;
    }
    if(mp1 != mp2) sameE = false;

    if(ok)
    {
        if(sameE) cout << "array" << nl;
        else cout << "both" << nl;

        return 0;
    }

    cout << "need tree" << nl;

    return 0;
}