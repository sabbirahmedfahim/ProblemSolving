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
        int n;
        cin >> n;
        int cntOdd = 0;
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            if (data % 2 != 0) cntOdd++;
        }
        if (cntOdd % 2 == 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}