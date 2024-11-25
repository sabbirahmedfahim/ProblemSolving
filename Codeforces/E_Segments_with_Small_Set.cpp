#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &data : v) cin >> data;

    ll cnt = 0; 
    // multiset<int> ml; // i should use map here, multiset counts duplicate so ml.size() in inaccurate
    map<int, int> mp;
    for (int l = 0, r = 0; r < n; r++)
    {
        mp[v[r]]++;
        while (mp.size() > k && l <= r)
        {
            // if(mp.count(v[l]) == 1) mp.erase(v[l]);
            // else mp[v[l]]--; 
            mp[v[l]]--;
            if(mp[v[l]] == 0) mp.erase(v[l]);
            l++;
        }
        if(!mp.empty()) cnt += (r-l+1);
    }
    cout << cnt << nl;

    return 0;
}