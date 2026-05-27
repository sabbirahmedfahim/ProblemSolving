#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;

    int cnt = 0;

    if(x%2 == 0)
    {
        for (int i = 2; i <= n; i += 2)
        {
            if(i == x) continue;
            int val = x + i;
            if(val % 2 == 0) cnt++;
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if(i == x) continue;
            int val = x + i;
            if(val % 2 == 0) cnt++;
        }
    }
    cout << cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}