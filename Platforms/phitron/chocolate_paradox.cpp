#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, t;
    cin >> x >> y >> t;
    int flag = 0;
    int total_test_x = t / x;
    int total_test_y = t / y;

    for (int i = 0; i <= total_test_x; i++)
    {
        for (int j = 0; j <= total_test_y; j++)
        {
            if ((x * i + y * j) == t)
            {
                flag = 1;
                break;
            }
        }
    }

    if (t % x == 0 || t % y == 0)
        flag = 1;

    cout << ((flag > 0) ? "YES" : "NO");

    return 0;
}