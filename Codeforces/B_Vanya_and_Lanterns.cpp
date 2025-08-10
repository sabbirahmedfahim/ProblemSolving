// took test cases as hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; double k; cin >> n >> k;
    vector<double> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));

    double dist = -1;
    for (int i = 0; i < n-1; i++)
    {
        dist = max(dist, a[i + 1] - a[i]);
    }
    
    if(dist != -1) dist /= 2;

    // cout << fixed << setprecision(10) << dist << nl;
    
    double lo = a[0], hi = a[n-1], res = -1;
    while (lo <= hi && dist != -1) // if between start - end points exists
    {
        double mid = lo + (hi - lo)/2;
        if((mid * 2) <= dist)
        {
            res = mid;
            hi = mid - 0.1;
        }
        lo = mid + 0.1;
    }

    if(res != -1) dist = res;

    if(a[0] != 0) dist = max(dist, a[0]);
    if(a[n - 1] != k) dist = max(dist, k - a[n - 1]);
    if(a[0] == 0 && a[n - 1] == 0 && k == 0) dist = 0;

    cout << fixed << setprecision(10) << dist << nl;

    return 0;
}