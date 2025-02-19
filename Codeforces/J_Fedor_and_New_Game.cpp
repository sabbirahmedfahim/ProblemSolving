#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k; // let, n er kaj nai
    vector<int> v(m);
    for (int i = 0; i < m; i++) cin >> v[i];
    int fedor; cin >> fedor;

    int ans = 0;
    for(auto data : v)
    {
        int cnt = 0;
        for (int bit = 20; bit >= 0 ; bit--)
        {
            if(((fedor>>bit)&1) != ((data>>bit)&1)) cnt++;
        }
        if(cnt <= k) ans++;
    }
    cout << ans << nl;

    return 0;
}