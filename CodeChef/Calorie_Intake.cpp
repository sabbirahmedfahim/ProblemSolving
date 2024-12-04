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

    int x,y,z; cin>> x >> y >>z;
    if(x >= y*z) cout << x - (y*z) << nl;
    else cout << -1 << nl;

    return 0;
}