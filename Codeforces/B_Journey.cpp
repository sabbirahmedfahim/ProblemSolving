#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, a, b, c; cin >> n >> a >> b >> c;
    ll cnt = n/(a+b+c); 
    ll cur = cnt * (a+b+c);
    cnt *= 3;
    ll extraCnt = 0;
    if(cur < n)
    {
        cur += a; extraCnt++;
    }
    if(cur < n)
    {
        cur += b; extraCnt++;
    }
    if(cur < n)
    {
        cur += c; extraCnt++;
    }
    cout << cnt + extraCnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}