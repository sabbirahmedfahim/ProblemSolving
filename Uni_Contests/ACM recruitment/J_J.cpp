#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define PI 3.1416
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        double n; cin >> n;
        double ans = PI * n * n;
        cout << fixed << setprecision(3);
        cout << ans << nl;
    }

    return 0;
}