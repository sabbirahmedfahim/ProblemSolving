#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;

    for (int mask = 0; mask < (1<<n); mask++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if((mask >> i) & 1) sum += v[i];
            else sum -= v[i];
        }
        if(sum%360 == 0)
        {
            cout << "YES" << nl; return;
        }
    }
    cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}