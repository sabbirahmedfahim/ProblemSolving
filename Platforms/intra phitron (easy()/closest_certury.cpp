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

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 100)
                arr[i] = 0;
        }

        int maxx = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxx && arr[i] < 100)
                maxx = arr[i];
        }
        cout << maxx <<endl;
    }

    return 0;
}