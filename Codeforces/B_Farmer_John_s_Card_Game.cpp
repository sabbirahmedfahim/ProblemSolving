#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, m; cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    
    for(auto &data : v)
    {
        sort(all(data));
        // print(data);
    }
    vector<pair<ll, ll>> eshoSerialBerKori;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            eshoSerialBerKori.push_back({v[i][j], i+1});
        }
    }

    vector<vector<ll>> whatsToBeDone(n, vector<ll> (m));
    map<vector<ll>, ll> mp;

    ll startWith = 0;
    for (int i = 0; i < n; i++)
    {
        ll barbeKotoKore = startWith;
        for (int j = 0; j < m; j++)
        {
            whatsToBeDone[i][j] = barbeKotoKore;
            barbeKotoKore += (n);
        }
        startWith++;
    }

    for(auto &data : whatsToBeDone)
    {
        sort(all(data));
        mp[data]++;
        // print(data);
    }

    for (int i = 0; i < n; i++)
    {
        if(!mp.count(v[i]))
        {
            cout << -1 << nl; return;
        }
    }
    

    // for(auto &data : whatsToBeDone)
    // {
    //     sort(all(data));
    //     print(data);
    // }
    // cout << nl;
    
    sort(all(eshoSerialBerKori));
    for(auto data : eshoSerialBerKori)
    {
        // cout << data.first << " " << data.second << nl;
        cout << data.second << " ";
    }
    cout << nl;
    
    // cout << "Diff -> " << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}