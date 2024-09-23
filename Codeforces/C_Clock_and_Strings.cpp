#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mx = max(a, b);
        int mn = min(a, b);
        int x = 0;
        if(c > mn && c < mx) x++;
        if(d > mn && d < mx) x++;
        if(x == 1) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}