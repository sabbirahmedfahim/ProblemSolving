#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int l,r; cin >> l >> r;
    ll mx = 0;
    for (int i = l; i <= r; i++)
    {
        for (int j = l; j <= r; j++)
        {
            mx = max(mx, 1ll * (i^j));
        }
    }
    cout << mx << nl;

    return 0;
}