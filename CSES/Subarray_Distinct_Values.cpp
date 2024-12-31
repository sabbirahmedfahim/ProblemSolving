// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void naive()
{
    int n, k; cin >> n >> k; vector<ll> v(n); for(auto &c : v) cin >> c;

    int cnt = 0;
    for (int i = 0; i < n; i++) 
    { 
        set<ll> s;
        for (int j = i; j < n; j++)
        {
            if(!s.count(v[j])) s.insert(v[j]);
            if(s.size() > k) break;
            else 
            {
                // cout << s.size() << nl;
                cnt++;
            }
        }
    }
    cout << cnt << nl;
}
void optimized()
{
    int n, k; cin >> n >> k; vector<ll> v(n); for(auto &c : v) cin >> c;

    ll cnt = 0;
    map<ll, ll> mp;
    int r = 0, l = 0;
    
    while (r < n)
    {
        mp[v[r]]++;
        while (mp.size() > k)
        {
            mp[v[l]]--;
            if(mp[v[l]] == 0) mp.erase(v[l]);
            l++;
        }
        cnt += (r-l+1);
        r++;
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // naive();
    optimized();

    return 0;
}