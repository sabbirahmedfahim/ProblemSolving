#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int x, y; cin >> x >> y;

    y = y * 10;
    if(x+y >= 100) cout << "Yes" << nl;
    else cout << "No" << nl;

    return 0;
}