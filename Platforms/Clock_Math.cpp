#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    float h, m; cin >> h >> m;
    float angleOfH = (30 * h) + (m/2);
    float angleOfM = m * 6;
    // cout << fixed << setprecision(7) << angleOfH << nl;

    float ektaAngle = angleOfH - angleOfM;
    float arektaAngle = 360 - ektaAngle;

    // cout << fixed << setprecision(7) << ektaAngle << nl;
    // cout << fixed << setprecision(7) << arektaAngle << nl;

    if(abs(ektaAngle) <= abs(arektaAngle)) cout << fixed << setprecision(7) << ektaAngle << nl;
    else cout << fixed << setprecision(7) << arektaAngle << nl;

    return 0;
}