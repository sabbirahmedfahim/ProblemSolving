#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &data : v) cin >> data;

    map<int, int> mp;
    for(auto data : v) mp[data]++;
    int mx_occurance_key = -1;
    // for(auto [key, val] : mp) cout << key << " " << val << nl;
    for(auto [key, val] : mp) if(val > mp[mx_occurance_key]) mx_occurance_key = key;
    int cnt = 0;
    for(auto data : v) if(data != mx_occurance_key) cnt++;

    cout << cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}