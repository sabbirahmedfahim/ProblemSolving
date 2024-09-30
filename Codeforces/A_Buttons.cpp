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
        int a, b, c; cin >> a >> b >> c;
        if(a == b)
        {
            if(c%2 == 0) cout << "Second" << nl;
            else cout << "First" << nl;
        }
        else if (a > b)
        {
            cout << "First" << nl;
        }
        else cout << "Second" << nl;
    }
    

    return 0;
}