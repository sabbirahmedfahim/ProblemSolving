#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int h, x, y; cin >> h >> x >> y;
    int cur = h - max(x,y), op = 1;
    while (1)
    {
        if(cur <= 0) break;
        cur -= x; op++;
    }
    cout << op << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}