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
    vector<ll> v(n); for(auto &data : v) cin >> data;
    string s; cin >> s;
    vector<ll> prefSum(n);
    prefSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefSum[i] = v[i] + prefSum[i-1];
    }
    // print(prefSum);
    
    ll sum = 0;
    int l = 0, r = n-1;
    while (l < r)
    {
        while (s[l] != 'L' && l < n) l++;
        while (s[r] != 'R' && r < n) r--;
        if(l < r && r < n)
        {
            if(l == 0) sum += prefSum[r];
            else sum += (prefSum[r] - prefSum[l-1]);
            l++, r--;
        }
        else break;
    }
    cout << sum << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}