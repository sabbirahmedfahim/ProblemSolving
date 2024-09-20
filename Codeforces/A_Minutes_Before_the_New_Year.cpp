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
        int h, m;
        cin >> h >> m;
        h = 23-h;   
        m = 60-m;
        cout << (h * 60) + m << nl;
    }

    return 0;
}