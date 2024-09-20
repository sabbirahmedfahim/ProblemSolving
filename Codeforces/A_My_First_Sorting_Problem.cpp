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
        int a, b; cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << nl;
    }
    

    return 0;
}