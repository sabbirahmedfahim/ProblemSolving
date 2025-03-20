#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll suffixSum(vector<ll> &a, int n, int m)
{
    if(m == 0) return 0;
    return a[n] + suffixSum(a, n-1, m-1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<ll> a(n); for(auto &e : a) cin >> e;

    cout << suffixSum(a, n-1, m) << nl;

    return 0;
}