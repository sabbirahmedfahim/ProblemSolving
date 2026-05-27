#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int b, g; cin >> b >> g;
    b *= 4; g *= 3 ;

    int s = b + g + 1;
    int ans = s/8;
    if(s%8 != 0) ans++;
    cout << ans;

    return 0;
}