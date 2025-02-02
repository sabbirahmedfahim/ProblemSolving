// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    int ans = a*b*c*d;
    int x = ans%10; ans /= 10; int y = ans%10;
    cout << y << x << nl;

    return 0;
}