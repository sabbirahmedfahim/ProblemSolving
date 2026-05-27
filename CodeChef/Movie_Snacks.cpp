#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int x, y, z; cin >> x >> y >> z;
    int regular_price = x+y;
    if(regular_price <= z) cout << x * 2 + y * 3 << nl;
    else 
    {
        cout << z * 2 + y << nl;
    }

    return 0;
}