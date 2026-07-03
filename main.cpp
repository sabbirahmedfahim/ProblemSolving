#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
long double degreeToRadian(long double degree) {
    return degree * acosl(-1.0L) / 180.0L;
}
void solve()
{
    long double a, b, c; cin >> a >> b;

    c = sqrt((a * a) + (b * b) - (2 * a * b) * cos(degreeToRadian(90.0)));

    long double area, s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << fixed << setprecision(10) << area << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}