#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    n++;

    long long int count = 0;
    while (n--)
    {
        bool flag = false;
        for (int i = 2; i <= 10; i++)
        {
            if (n%i == 0)
            {
                flag = true;
                break;
            }       
        }
        if (!flag)
        {
            count++;
        }
    }

    cout << count;  

    return 0;
}