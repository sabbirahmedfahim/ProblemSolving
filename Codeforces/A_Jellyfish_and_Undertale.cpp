#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
every second -> 
i. the timer decreases by 1
ii. if a tool is available, use it
*/
void solve()
{
    ll mxCapacity, cur, n; cin >> mxCapacity >> cur >> n;
    ll cnt = cur;
    while (n--)
    {
        ll data; cin >> data;
        cnt += min(mxCapacity, data + 1) - 1;
        /* amra (data+1) kortesi karon bomb 0 second e explode hobe tai always 1 theke data
        add korbo which is one second before explode. then, amra shei second ta 1 decrease kore
        dicchi second condition onujai
        */ 
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