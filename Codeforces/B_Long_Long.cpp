#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    bool neg_open = false; int cnt = 0;
    ll sum = 0;
    while (n--)
    {
        ll data; cin >> data;
        sum += max(data, -data);
        if(data < 0 && !neg_open)
        {
            cnt++; neg_open = !neg_open;
        }
        if(data > 0) neg_open = false;
    }

    cout << sum << " " << cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}