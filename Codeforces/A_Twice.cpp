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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        mp[data]++;
    }
    int cnt = 0;
    for(auto [key,val] : mp) cnt += (val/2);
    cout << cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}