#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int m, n, o, p; cin >> m >> n >> o >> p;
    int mm = min(m, o), nn = min(n,p), oo = max(m, o), pp = max(n, p);

    if(nn < oo) cout << -1 << nl;
    else cout << oo << " " << nn << nl;

    return 0;
}