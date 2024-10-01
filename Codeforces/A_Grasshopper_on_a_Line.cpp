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
        int x, k; cin >> x >> k;
        if(x%k != 0)
        {
            cout << 1 << nl << x << nl;
        }
        else 
        {
            cout << 2 << nl;
            cout << x-3 << " " << 3 << nl;
        }
    }

    return 0;
}