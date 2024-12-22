#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s, ans; cin >> s; reverse(all(s));
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'w') ans += 'w';
        else if(s[i] == 'p') ans += 'q';
        else ans += 'p';
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