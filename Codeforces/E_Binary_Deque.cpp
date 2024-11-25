#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, s; cin>> n >> s;
    vector<int> v(n);
    for(auto &data : v) cin >> data;

    int ans = 0, sum = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += v[r];
        if(sum == s)
        {
            ans = max(ans, r-l+1); continue;
        }
        while (sum > s)
        {
            sum -= v[l]; l++;
        }
        ans = max(ans, r-l+1);
    }
    if(sum < s) cout << -1 << nl;
    else cout << n - ans << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}