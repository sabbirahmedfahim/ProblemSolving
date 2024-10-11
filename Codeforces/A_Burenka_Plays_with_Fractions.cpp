#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll a_d = a*d, b_c = b*c;
        if(a==0 && c==0 || b==0 && d==0 || a_d == b_c) cout << 0 << nl;
        else if(a==0 || c==0 || b_c % a_d == 0 || a_d % b_c == 0) cout << 1 << nl;
        else cout << 2 << nl;
    }

    return 0;
}