#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, x; cin>>n>>x;
    vector<int>a(n); for(auto &e : a) cin>>e;
    map<int, int> mp;
    for(auto e : a) mp[e]++;

    int c, d;
    for (int i = 0; i < n; i++)
    {
        if(mp.count(x - a[i]))
        {
            if((2 * a[i]) == x && mp[a[i]] == 1) continue;
            else if((2 * a[i]) == x) c = a[i], d = a[i];
            else c = a[i], d = x - a[i];
        }
    }

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < n; i++)
    {
        if(idx1 == -1 && a[i] == c) 
        {
            idx1 = i + 1; continue;
        }
        if(idx2 == -1 && a[i] == d) idx2 = i + 1; 
    }
    
    if(idx1 == -1 || idx2 == -1) cout << "IMPOSSIBLE" << nl;
    else cout << idx1 << " " << idx2 << nl;

    return 0;
}