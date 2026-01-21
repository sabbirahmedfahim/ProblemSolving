#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    if(n > 100)
    {
        n -= 100;

        cout << n / 50 << nl;
    }
    else cout << 0 << nl;

    return 0;
}