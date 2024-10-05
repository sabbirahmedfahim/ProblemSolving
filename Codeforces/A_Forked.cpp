// youtube
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define pi pair<ll, ll>
using namespace std;
// vector<pair<int,int>> d = {{-2,-1},{-2,1},{2,-1},{2,1},{-1,-2},{-1,2},{1,-2},{1,2}};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, kx, ky, qx, qy;
        cin >> x >> y >> kx >> ky >> qx >> qy;
        vector<pi> d = {{-x, -y}, {-x, y}, {x, y}, {x, -y}, {y, x}, {y, -x}, {-y, x}, {-y, -x}};
        set<pi> attackKing, attackQueen;
        for (int i = 0; i < 8; i++)
        {
            attackKing.insert({kx + d[i].first, ky + d[i].second});
            attackQueen.insert({qx + d[i].first, qy + d[i].second});
        }
        ll ans = 0;
        for (pi data : attackKing)
        {
            if (attackQueen.find(data) != attackQueen.end()) // find jodi end() porjonto na jay(end() porjonto iterate na kore) then value ta ache, ans++ koro
                ans++;
        }
        cout << ans << nl;
    }

    return 0;
}