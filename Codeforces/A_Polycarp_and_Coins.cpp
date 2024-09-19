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
        ll n;
        cin >> n;    
        int div3 = n % 3;
        if (div3 == 0)
        {
            cout << n / 3 << " " << n / 3 << nl;
        }
        else if (div3 == 2)
        {
            cout << n/3 << " " << (n/3)+1 << nl;
        }
        else
        {
            cout << (n / 3) + div3 << " " << n / 3 << nl;
        }
    }

    return 0;
}