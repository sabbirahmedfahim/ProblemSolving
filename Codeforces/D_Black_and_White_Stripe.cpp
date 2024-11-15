#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;

    int ans, cnt = 0;

    for (int i = 0; i < k; i++) if(s[i] == 'W') cnt++;
    ans = cnt;
    for (int i = k, j = 0; i < n; i++, j++)
    {
        if(s[i] == 'W') cnt++;
        if(s[j] == 'W') cnt--;
        ans = min(ans, cnt);
    }
    
    cout << ans << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}