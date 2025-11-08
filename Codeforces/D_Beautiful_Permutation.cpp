#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int type, int l, int r)
{
    cout << type << " " << l << " " << r << nl;

    int x; cin >> x;
    return x;
}
void solve()
{
    int n; cin >> n;
    int modifiedSum = ask(2, 1, n);
    int tot_len = modifiedSum - ((n * (n + 1)) / 2);

    int curr_l_lo = 1, curr_l_hi = n, l = -1;
    while (curr_l_lo <= curr_l_hi)
    {
        int mid = curr_l_lo + ((curr_l_hi - curr_l_lo) >> 1);
        if(ask(1, 1, mid) != ask(2, 1, mid))
        {
            l = mid;
            curr_l_hi = mid - 1;
        }
        else curr_l_lo = mid + 1;
    }

    cout << "! " << l << " " << l + tot_len - 1 << nl;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
