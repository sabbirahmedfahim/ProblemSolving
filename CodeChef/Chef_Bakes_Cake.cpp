#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, a, b; cin >> n >> a >> b;

    int cnt = 0;
    while (n > 0)
    {
        n -= b / a;
        cnt++;
    }
    cout << cnt << nl;

    return 0;
}