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
    set<vector<ll>> s;
    vector<ll> tmp;
    for (int i = 0; i < n; i++)
    {
        int k = n-1;
        for (int j = 0; j < n; j++)
        {
            if(i == j) continue;
            mp[v[j]] = j+1;
        }
        for(auto &[key, val] : mp) mp[key] = k--;
        for (int j = 0; j < n; j++)
        {
            if(i == j) continue;
            tmp.push_back(mp[v[j]]);
        }
        s.insert(tmp);
        print(tmp);
        mp.clear();
        tmp.clear();
    }
    cout << s.size() << nl;
}
void solve2()
{
    int n; cin >> n; vector<ll> v(n), x; for(auto &data : v) cin >> data;
    x = v; sort(all(x));
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) mp[x[i]] = i;
    
    int cnt = 1;
    for (int i = 1; i < n; i++) // ad-hoc shera
    {
        int idx = mp[v[i]];
        int target = v[i-1];
        if(mp[target] == idx - 1 || mp[target] == idx + 1);
        else cnt++;
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}