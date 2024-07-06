#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int count = 0;

        for (long long int i = 1; i <= n; i++)
        {
            long long int num = i;
            long long int rem = num % 10;
            int flag = 1;

            while (num > 0)
            {
                if (num % 10 != rem)
                {
                    flag = 0;
                    break;
                }
                num = num / 10;
            }

            if (flag == 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
