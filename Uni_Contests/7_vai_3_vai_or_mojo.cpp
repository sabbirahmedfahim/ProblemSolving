#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int x, a, b; cin >> x >> a >> b;

    if(abs(x-a) == abs(x-b)) cout << "mojo" << nl;
    else if(abs(x-a) > abs(x-b)) cout << "3vai" << nl;
    else cout << "7vai" << nl;

    return 0;
}