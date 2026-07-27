#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; // safer against overflow
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int ans = abs(a[0] - a[1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(i == 0 && j == 1) continue;

            ans *= abs(a[i] - a[j]);
        }
    }
    
    int chk = abs(a[0] - a[1]);
    for (int i = 1; i < n; i++)
    {
        chk *= abs(a[0] - a[i]);
    }

    int nope = 0;
    for (int i = 1; i < n; i++)
    {
        nope = abs(a[0] - a[i]);
        chk *= chk - nope;
    }

    cout << chk << nl;

    cout << ans << " : " << ans % m << nl;

    return 0;
}