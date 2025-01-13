// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k; vector<int> v(n); for(auto &c : v) cin >> c;
    // int cur = 1, miss = 0, cnt = 0;
    int cur = 1;
    for(auto data : v)
    {
        if(data == cur) cur++;
        // else miss++;
        // if(miss%k == 0 && miss > 0)
        // {
        //     miss = 0; cnt++;
        // }
    }
    // if(cur == n-1) cout << 0 << nl;
    // else if(cnt == 1) cout << 1 << nl;
    // else cout << 2 << nl;

    cout << (n - cur + k) / k << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}