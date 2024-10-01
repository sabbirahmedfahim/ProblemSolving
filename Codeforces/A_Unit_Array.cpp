#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        int negativeCount = 0;
        int positiveCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1) positiveCount++;
            else negativeCount++;
        }
        cout << abs(positiveCount-negativeCount) << nl;
    }

    return 0;
}