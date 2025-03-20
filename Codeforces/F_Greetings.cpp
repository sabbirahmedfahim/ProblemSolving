#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    map<int, int> diff;

    while (n--)
    {
        int l, r; cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }
    
    ll sum = 0, res = 0;
    for(auto [key, val] : diff)
    {
        sum += val;
        cout << sum << ' ';
        if(sum > 1) res++;
    }
    // cout << nl;
    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }


    return 0;
}