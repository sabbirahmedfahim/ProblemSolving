#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, m; cin >> n;
    /* (n* (n-1))/2 -> (n*n - n)/2 */ 
    m = (n*n - n)/2;
    vector<ll> b(m), a;
    for(auto &data : b) cin >> data;
    sort(all(b));
    // print(b);

    for (int i = 0, j = 1; i < m; j++)
    {
        a.push_back(b[i]);
        i += n-j;
    }

    a.push_back(1e9);
    print(a);
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}