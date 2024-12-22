#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    if(n & 1)
    {
        cout << 4 << nl;
        cout << 1 << " " << n-1 << nl;
        cout << 1 << " " << n-1 << nl;
        cout << n-1 << " " << n << nl;
        cout << n-1 << " " << n << nl;
    }
    else
    {
        cout << 2 << nl;
        cout << 1 << " " << n << nl;
        cout << 1 << " " << n << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}