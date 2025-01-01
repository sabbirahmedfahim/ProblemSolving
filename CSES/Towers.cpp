#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve() // TLE
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    map<ll, ll> mp; 
    int cnt = 0;
    for(auto data : v)
    {
        if(mp.empty())
        {
            mp[data]++; cnt++; continue;
        }
        bool is_changed = false;
        for(auto &[key, val] : mp) // TLE for the loop
        {
            if(data < key) 
            {
                auto it = mp.find(key);
                mp.erase(it);
                mp[data] = 1; 
                is_changed = true; break;
            }
        }
        if(!is_changed) 
        {
            mp[data]++; cnt++;
        }
    }
    // for(auto [key, val] : mp)
    // {
    //     cout << key << " " << val << nl;
    // }
    cout << nl << cnt << nl;
}
void solve2() // unable to handle duplicates
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    map<ll, ll> mp; 
    int cnt = 0;
    for(auto data : v)
    {
        if(mp.empty())
        {
            mp[data]++; cnt++; continue;
        }
        auto it = mp.upper_bound(data); // reduced TLE
        if(it != mp.end()) 
        {
            mp.erase(it); mp[data] = 1;
        }
        else
        {
            mp[data]++; cnt++;
        }
    }
    cout << nl << cnt << nl;
}
void solve3()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    multiset<ll> ml;
    int cnt = 0;
    for(auto data : v)
    {
        if(ml.empty())
        {
            ml.insert(data); cnt++; continue;
        }
        auto it = ml.upper_bound(data); // reduced TLE
        if(it != ml.end()) 
        {
            ml.erase(it); ml.insert(data);
        }
        else
        {
            ml.insert(data); cnt++;
        }
    }
    cout << nl << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // solve();
    // solve2();
    solve3();

    return 0;
}