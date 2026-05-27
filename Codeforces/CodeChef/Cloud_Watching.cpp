#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int x, y; cin >> x >> y;
    x *= 3;
    if(y >= x) cout << "Rain";
    else cout << "Dry";

    return 0;
}