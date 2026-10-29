#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
   
    int ans = 0;
    for (int i = n - 1; i >= 0; )
    {
        if(s[i] == '1')
        {
            ans++;

            int canGo = max(1, k);
            // cerr << i << " : " << canGo << nl;
            i -= canGo;
        }
        else i--;
    }
    
    cout << ans << nl;
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