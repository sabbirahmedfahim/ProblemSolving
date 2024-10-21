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
    int cnt_0 = 0, cnt_1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0') cnt_0++;
        else cnt_1++;
    }
    // cout << abs(cnt_0-cnt_1)%2 << nl; // my approach
    // didn't understand next lines
    for (int i = 0; i < s.size(); i++) 
    {
        if(s[i] == '0') 
        {
            if(cnt_1 - 1 < 0) break;
            cnt_1--;
            cnt_1 = max(0, cnt_1);
        }
        else
        {
            if(cnt_0 - 1 < 0) break;
            cnt_0--;
            cnt_0 = max(0, cnt_0);
        }
    }
    cout << cnt_0 + cnt_1 << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}