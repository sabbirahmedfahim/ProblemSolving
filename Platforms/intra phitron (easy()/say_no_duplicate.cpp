#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }

        int count_duplicate = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count_duplicate++;
            }
        }

        int arr2[n - count_duplicate];
        int custom_index = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                arr2[custom_index] = arr[i];
                custom_index++;
            }
        }

        for (int i = 0; i < (n - count_duplicate); i++)
        {
            cout << arr2[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}