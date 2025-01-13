#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<int> v(n); for(auto &data : v) cin >> data;

    int mx = -1;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if(__gcd(v[i], v[j]) == 1)
            {
                mx = max(mx, i+j+2);
            }
        }
        if(mx >= i+i+2) break;
    }
    cout << mx << nl;
}
void solve2()
{
    int n; cin >> n; 
    vector<int> v(n); for(auto &data : v) cin >> data;

    // 1000 disticnt element, wanna use set/map and eliminate some? remember index matters
    map<int, int> mp;
    vector<int> distinctEle;
    for (int i = 0; i < n; i++) mp[v[i]] = i+1;
    for(auto [key, val] : mp) distinctEle.push_back(key);

    int mx = -1;
    for (int i = distinctEle.size()-1; i >= 0; i--)
    {
        for (int j = distinctEle.size()-1; j >= 0; j--)
        {
            if(__gcd(distinctEle[i], distinctEle[j]) == 1)
            {
                mx = max(mx, mp[distinctEle[i]]+mp[distinctEle[j]]);
            }
        }
        // if(mx >= i+i) break;
    }
    cout << mx << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}