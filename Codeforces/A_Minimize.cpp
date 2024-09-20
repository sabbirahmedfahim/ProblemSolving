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
        int mn = 10000;
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if ((i - a) + (b - i) > -1 && (i - a) + (b - i) < mn)
                mn = (i - a) + (b - i);
        }
        cout << mn << nl;
    }

    return 0;
}