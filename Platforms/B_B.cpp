#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll b; cin >> b;
    ll cnt = 0;
    ll tmp = b; 
    while (tmp)
    {
        cnt++; tmp/=10;
    }
    // cnt /= 2;
    cnt = pow(10, cnt-2);

    cout << cnt << nl;
    for (ll i = cnt; i <= 1000000000; i++)
    {
        if(pow(i, i) == b)
        {
            cout << i << nl; return;
        }   
        if(pow(i, i) > b) break;
    }
    cout << -1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}