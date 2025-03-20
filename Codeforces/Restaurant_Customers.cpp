#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

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
        res = max(res, sum);
    }
    cout << res << nl;

    return 0;
}