#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v)         \
    for (auto &data : v) \
    cin >> data
#define print(v)             \
    for (auto data : v)      \
        cout << data << " "; \
    cout << nl
#define FAJR_BOOST()                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    input(v);

    bool isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1]) isSorted = false;
    }
    ll minOp = 1e18;
    if(!isSorted) cout << 0 << nl;
    else
    {
        // youtube
        for (int i = 0; i < n-1; i++)
        {
            // {(l-r)/2} + 1 [formulla]
            minOp = min(((abs(v[i]-v[i+1]))/2)+1, minOp);
        }
        cout << minOp << nl;
    }
    
    // my approach
    // ll minOp = 1e18;
    // bool isSorted = true;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (v[i] > v[i + 1]) isSorted = false;
    //     minOp = min(minOp, v[i+1] - v[i]);
    // }
    // if (!isSorted) cout << 0 << nl;
    // else cout << ((minOp > 0) ? minOp : 1 ) << nl;
}
int main()
{
    FAJR_BOOST()

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}