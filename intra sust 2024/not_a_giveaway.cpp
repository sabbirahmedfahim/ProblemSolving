#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        int count_8 = 0;

        ans = arr[i] / 7;
        arr[i] = arr[i] % 7;
        count_8 = ans;

        if (arr[i] > 0)
        {
            switch (arr[i])
            {
            case 2:
                cout << "1";
                break;
            case 3:
                cout << "7";
                break;
            case 4:
                cout << "4";
                break;
            case 5:
                cout << "2";
                break;
            case 6:
                cout << "0";
                break;

            default:
                break;
            }
        }
        for (int k = 0; k < count_8; k++)
            cout << "8";
        cout << endl;
    }

    return 0;
}