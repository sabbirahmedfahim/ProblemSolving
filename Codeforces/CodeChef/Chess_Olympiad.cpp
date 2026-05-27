#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int x, y, z; cin >> x >> y >> z;
    int sum = 4 - (x+y+z);
    cout << ((sum+x > z)? "Yes" : "No" ) << nl;

    return 0;
}