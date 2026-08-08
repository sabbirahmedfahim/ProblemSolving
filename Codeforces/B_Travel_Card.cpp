#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;

    int ninety_50 = 0, oneDay_1440_120 = 0;
    for (int l = 0, r = 0, dayy = 0; r < n; r++)
    {
        while (a[r] - a[l] >= 90)
        {
            ninety_50 -= b[l];
            l++;
        }
        while (a[r] - a[dayy] >= 1440)
        {
            oneDay_1440_120 -= b[dayy];
            dayy++;
        }
        
        if(ninety_50 == 50) cout << 0 << nl;
        else if(oneDay_1440_120 == 120) cout << 0 << nl;
        else if(ninety_50 + 10 == 50)
        {
            b[r] = 10;
            ninety_50 += 10;
            oneDay_1440_120 += 10;
            cout << 10 << nl;
        }
        else if(oneDay_1440_120 + 10 == 120)
        {
            b[r] = 10;
            oneDay_1440_120 += 10;
            ninety_50 += 10;
            cout << 10 << nl;
        }
        else
        {
            b[r] = 20;
            oneDay_1440_120 += 20;
            ninety_50 += 20;

            cout << 20 << nl;
        }

        // cerr << oneDay_1440_120 << nl;
    }
    cout << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}