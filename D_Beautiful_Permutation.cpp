#include <bits/stdc++.h>
// #define nl '\n'
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    cout << "2 " << 1 << " " << n << nl;
    int x; cin >> x;
    int sum = (n * (n + 1)) / 2;

    int len = x - sum;

    auto ask = [&](int mid) -> bool
    {
        cout << "2 " << 1 << " " << mid << nl;
        int data; cin >> data;
        cout << "1 " << 1 << " " << mid << nl;
        int data2; cin >> data2;

        if(data != data2) return true;
        else return false;
    };

    int lo = 1, hi = n, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(ask(mid))
        {
            res = mid; 
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    
    cout << "! " << res << " " << res + len - 1 << nl;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}