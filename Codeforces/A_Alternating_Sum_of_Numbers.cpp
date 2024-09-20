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
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
                sum += arr[i];
            else
                sum -= arr[i];
        }
        cout << sum << nl;
    }

    return 0;
}