#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int x; cin >> x;

    if(x > 2 && (x % 2 == 0)) cout << "YES" << nl;
    else cout << "NO" << nl;

    return 0;
}