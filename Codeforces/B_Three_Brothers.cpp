#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 3; i++)
    {
        if (a != i && b != i)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}