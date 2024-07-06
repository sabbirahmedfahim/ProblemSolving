#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        string s;
        cin >> s;

        int len = s.size();
        char arr[len];
        for (int i = 0; i < len; i++)
        {
            arr[i] = s[i];
        }

        sort(arr, arr + len);
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                count++;
            }
        }

        if (len % 2 == 0)
        {
            if (count > 1 && len > 1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if (count-2 > 0 && len > 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}