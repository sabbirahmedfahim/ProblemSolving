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
        int arr[n];
        bool isSorted = true;
        int mnDistance = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
                continue;
            if (arr[i - 1] > arr[i])
                isSorted = false;
            if (arr[i] - arr[i - 1] > 0)
                mnDistance = min(mnDistance, arr[i] - arr[i - 1]);
        }
        if (!isSorted)
            cout << 0 << nl;
        else if(mnDistance == INT_MAX) cout << 1 << nl;
        else if (mnDistance % 2 == 0)
            cout << mnDistance << nl;
        else
            cout << (mnDistance / 2) + 1 << nl;
    }

    return 0;
}