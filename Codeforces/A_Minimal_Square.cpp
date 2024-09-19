#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin>> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        int mx = max(a, b);
        int mn = min(a, b);
        mn*=2;
        if(mn > mx) cout << mn*mn << nl;
        else cout << mx*mx << nl;
    }
    

    return 0;
}