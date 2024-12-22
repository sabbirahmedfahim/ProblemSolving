#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
if you got a TLE on tc 3, read the editorial for soem hints and then work on it. Pretty simple question.
One thing you should remember, do not sort the array's, think differently. 
Hmmmm... 1<=Xi<=30 is the key...
*/
void solve()
{
    int n, q; cin >> n >> q;
    deque<ll> a(n), b(q); 
    for(auto &data : a) cin >> data; for(auto &data : b) cin >> data;
    set<ll> s; vector<ll> c;
    for(auto data : b) 
    {
        if(!s.count(data)) 
        {
            c.push_back(data); s.insert(data);
        }
    }
    
    for(auto &data : a)
    {
        for (int i = 0; i < c.size(); i++)
        {
            ll toPowerData = pow(2, c[i]), replaceData = pow(2, c[i]-1);
            if(data%toPowerData == 0) data += replaceData;
        }
    }
    print(a); 
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}