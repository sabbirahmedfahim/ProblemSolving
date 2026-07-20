#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a(3);
    for(auto &e : a) cin >> e;

    sort(all(a));

    if(a[0] == a[2])
    {
        cout << 0 << nl; return 0;
    }

    int res = 0;
    if(a[1] < a[2]) res += a[2] - 1 - a[1];
    // if(a[0] + )
    res += a[2] - a[0] - 1;

    cout << res << nl;

    return 0;
}