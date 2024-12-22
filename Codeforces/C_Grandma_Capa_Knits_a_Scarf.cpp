// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int ans = 2E6;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int l = 0, r = n-1, cnt = 0;
        while (l <= r)
        {
            if(s[l] == s[r])
            {
                l++, r--;
            }
            else if(s[l] == ch) 
            {
                l++; cnt++;
            }
            else if(s[r] == ch) 
            {
                r--; cnt++;
            }
            else 
            {
                cnt = 2E6; break;
            }
        }
        ans = min(ans, cnt);
    }
    if(ans == 2E6) cout << -1 << nl;
    else cout << ans << nl;
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
