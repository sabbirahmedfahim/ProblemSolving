#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]] = i;
    }
    
    
    vector<bool> vis(n, false);

    int cnt = 0, currIdx = 0;
    for (int i = 0; i < n; i++)
    {
        while(currIdx < n && vis[currIdx] == true) currIdx++;

        if(b[i] == a[currIdx]) 
        {
            vis[currIdx] = true; currIdx++;
        }
        else 
        {
            // cerr << b[i] << " --> " << currIdx << nl;
            cnt++;
            vis[mp[b[i]]] = true;
        }
    }
    cout << cnt << nl;

    return 0;
}