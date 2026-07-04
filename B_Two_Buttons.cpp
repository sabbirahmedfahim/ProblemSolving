#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int getAns(int curr, int n, int m)
{
    int sum = n - curr;

    while (curr < m)
    {
        curr *= 2;
        sum++;
    }
    if(curr > m) sum += curr  - m;

    return sum;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    
    if(n > m)
    {
        cout << n - m << nl;
        return 0;
    }

    int mn = 1E18;
    for (int i = 1; i <= n; i++)
    {
        mn = min(mn, getAns(i, n, m));
    }
    cout << mn << nl;

    return 0;
}