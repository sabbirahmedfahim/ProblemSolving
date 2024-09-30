// this problem is originally from Samsung HackerRank contest
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
        int k = 1;
        int t = 5;
        bool flag = true;
        while (t--)
        {
            ll m, q, r;
            cin >> m >> q >> r;

            if (k >= 1 && k <= 3)
            {
                if (2 * n != m || (2 * n) * 3 != q || ((2 * n) * 3) * 10 != r)
                    flag = false;
            }
            else if (k == 4)
            {
                if (1 * n != m || (1 * n) * 3 != q || ((1 * n) * 3) * 10 != r)
                    flag = false;
            }
            else
            {
                if (3 * n != m || (3 * n) * 3 != q || ((3 * n) * 3) * 10 != r)
                    flag = false;
            }
            k++;
        }
        if (flag)
            cout << "Consistent" << nl;
        else
            cout << "Inconsistent" << nl;
    }

    return 0;
}