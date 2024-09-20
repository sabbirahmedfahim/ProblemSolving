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
        ll n, x, y;
        cin >> n >> x >> y;
        if(x > y) x = y;
        if(n%x == 0) cout << n/x << nl;
        else cout << (n/x)+1 << nl;
    }
    

    return 0;
}