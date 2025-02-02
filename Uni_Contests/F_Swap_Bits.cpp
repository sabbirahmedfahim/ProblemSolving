#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string s; 
    for (int mask = 0; mask <= 29; mask++) // constraints -> 0 <= N <= 10^9
    {
        if((n>>mask) & 1) s += '1';
        else s += '0';
    }
    // cout << s << " -> ";
    for (int i = 0; i < 30; i+=2) swap(s[i], s[i+1]);
    // cout << s << nl;
    
    int ans = 0;
    for (int i = 0; i <= 29; i++) 
    {
        if(s[i] == '1') ans += (1ll << i);
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}