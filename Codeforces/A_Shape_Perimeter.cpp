#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    int a = 0, b = 0, startX = -1, startY = -1;
    while (n--)
    {
        int x, y; cin >> x >> y;
        if(startX == -1) startX = x;
        if(startY == -1) startY = y;
        a += x; b += y;
    }
    a += m, b += m;
    a -= startX, b -= startY;
    cout << (a+b) * 2 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}