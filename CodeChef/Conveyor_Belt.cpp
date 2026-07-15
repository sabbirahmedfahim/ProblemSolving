#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, p; string s; cin >> n >> p >> s;

    p--;

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i <= p; i++)
    {
        if(s[i] == 'R') cnt1++;
    }
    
    for (int i = p; i < n; i++)
    {
        if(s[i] == 'L') cnt2++;
    }
    
    cout << min(cnt1, cnt2) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}