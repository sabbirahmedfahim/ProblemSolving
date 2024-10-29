#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    string s; cin >> s;
    int cnt_sml = 0, cnt_cap = 0;
    string ans = "";
    for (int i = s.size()-1; i >= 0; i--)
    {
        if(s[i] == 'b') cnt_sml++;
        else if(s[i] == 'B') cnt_cap++;
        else if(islower(s[i]) && cnt_sml) cnt_sml--;
        else if(isupper(s[i]) && cnt_cap) cnt_cap--;
        else ans += s[i];
    }
    reverse(ans.begin(), ans.end());
    cout << ans << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}