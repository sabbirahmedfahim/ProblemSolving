#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    double n;
    cin >> n;
    double ans = pow(5, n);
    ll ans2 = static_cast<ll>(ans);
    cout << ans2 % 100;

    return 0;
}