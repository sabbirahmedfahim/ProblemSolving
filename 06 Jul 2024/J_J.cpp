#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int countInclusive = 0;
    long long int a, b, c, d;
    cin >> a >> b;
    for (int i = 0; i < t - 1; i++)
    {
        if (t == 1)
        {
            cout << '0' <<endl;
            break;
        }
        cin >> c >> d;
        if (a < c && d < b)
        {
            countInclusive++;
        }
    }
    cout << countInclusive;

    return 0;
}