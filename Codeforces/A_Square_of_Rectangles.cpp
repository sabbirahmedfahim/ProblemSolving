#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    vector<int> a(7);
    for (int i = 1; i <= 6; i++)
    {
        cin >> a[i];
    }
    
    if(a[1] == a[3] && a[3] == a[5] && (a[2] + a[4] + a[6]) == a[1]) cout << "YES" << nl;
    else if(a[2] == a[4] && a[4] == a[6] && (a[1] + a[3] + a[5]) == a[2]) cout << "YES" << nl;

    else if((a[3] == a[5]) && (a[3] + a[1]) == a[2] && (a[4] + a[6]) == a[2]) cout << "YES" << nl;
    else if((a[1] == a[3]) && (a[3] + a[5]) == a[6] && (a[2] + a[4]) == a[6]) cout << "YES" << nl;
    else if((a[5] == a[1]) && (a[3] + a[5]) == a[4] && (a[2] + a[6]) == a[4]) cout << "YES" << nl;

    else if((a[4] == a[6]) && (a[2] + a[4]) == a[1] && (a[3] + a[5]) == a[1]) cout << "YES" << nl;
    else if((a[2] == a[4]) && (a[4] + a[6]) == a[5] && (a[1] + a[3]) == a[5]) cout << "YES" << nl;
    else if((a[2] == a[6]) && (a[2] + a[4]) == a[3] && (a[1] + a[5]) == a[3]) cout << "YES" << nl;
    
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}