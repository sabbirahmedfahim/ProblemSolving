#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll a, b, c, d; cin >> a >> b >> c >> d;
    cout << "Difference = " << (a*b)-(c*d) << nl;

    return 0;
}