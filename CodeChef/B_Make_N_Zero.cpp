#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    if(n%3 == 0 || n%4 == 0)
    {
        cout << "YES" << nl; return;
    }
    int tmp = n;
    while (tmp > 0)
    {
        tmp -= 3;
        if(tmp >= 4 && tmp%4 == 0)
        {
            cout << "YES" << nl; return;
        }
    }
    tmp = n;
    while (tmp > 0)
    {
        tmp -= 4;
        if(tmp >= 3 && tmp%3 == 0)
        {
            cout << "YES" << nl; return;
        }
    }
    cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}