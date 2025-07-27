#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
double f(double x) 
{
    return round(x * 2) / 2.0;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; double w; cin >> n >> w;
    vector<double> a(n + n);
    for(auto &e : a) cin >> e; 
    sort(all(a));
    // print(a);

    auto canWePlace = [&](double mid)
    {
        double girls = mid/3, boys = mid - girls;
        if(a[0] >= girls/n && a[n] >= boys/n && mid <= w) return true;
        else return false;
    };

    double lo = 0, hi = 1E18, res = -1;
    while (lo <= hi)
    {
        double mid = lo + (hi-lo)/2;
        if(canWePlace(mid))
        {
            res = mid;
            lo = mid + 0.1;
        }
        else hi = mid - 0.1;
    }
    cout << fixed << setprecision(1) << f(res) << nl;

    // if(canWePlace(4.5)) cout << "OK";

    return 0;
}