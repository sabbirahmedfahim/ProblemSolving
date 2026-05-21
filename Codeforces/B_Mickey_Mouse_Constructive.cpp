// fixed mathematical issues
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve(int g)
{
    int x, y; cin >> x >> y; // x -> 1, y -> -1
    int realX = x, realY = y;
    if(x > y) swap(x, y);

    int cnt = 0;
    if(x == y)
    {
        cout << 1 << nl;
        for (int i = 0; i < realX; i++) cout << 1 << " ";
        for (int i = 0; i < realY; i++) cout << -1 << " ";
        cout << nl;

        return;
    }

    int Y = y - x;

    for (int i = 1; i * i <= Y; i++)
    {
        if(Y % i == 0) 
        {
            cnt++;
            
            if(Y / i != i) cnt++;
        }
    }

    cout << cnt << nl;
    for (int i = 0; i < realX; i++) cout << 1 << " ";
    for (int i = 0; i < realY; i++) cout << -1 << " ";
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve(tt);
    }

    return 0;
}