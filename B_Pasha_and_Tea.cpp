#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, w; cin >> n >> w;
    vector<double> a(2*n + 1);
    for (int i = 1; i <= 2*n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end());
    for (int i = 1; i <= 2*n; i++) cout << a[i] << " "; cout << nl;
    double girl_mn = a[1], boy_mn = a[n + 1];
    // cout << girl_mn << " " << boy_mn << nl;

    auto canWePlace = [&](double mid)
    {
        double maybe_res = mid * n;
        maybe_res += (maybe_res * 2.00L);
        return maybe_res <= w;
    };

    double l = 0, r = girl_mn, data = -1;

    while (l <= r)
    {
        double mid = l + (r-l)/2.00L;
        if(canWePlace(mid))
        {
            data = mid;
            l = mid + 0.1;
        }
        else r = mid - 0.1;
    }
    
    double x = ceil(data * 2)/2, y = floor(data * 2)/2; // *** nearest value of 1.67 is 1.5 and 2
    cout << x << " ___ " << y << nl;
    if(canWePlace(x)) data = x;
    else data = y;
    
    double res = data * n;
    res += (res * 2);
    // double xx = ceil(res * 2)/2, yy = floor(res * 2)/2;
    // if(res > w) res = xx;
    // else res = yy;
    cout << fixed << setprecision(7) << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}