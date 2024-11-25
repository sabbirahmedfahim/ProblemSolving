// upsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
Lession : CP is all about detecting pattern
*/
void solve()
{
    int n; cin >> n;
    if(n < 5) 
    {
        cout << -1 << nl; return;
    }

    for (int i = 1; i <= n; i += 2)
    {
        if(i == 5) continue;
        cout << i << " ";
    }
    cout << 5 << " " << 4 << " ";
    for (int i = 2; i <= n; i += 2)
    {
        if(i == 4) continue;
        cout << i << " ";
    }
    cout << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}