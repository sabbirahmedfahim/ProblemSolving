#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = arr[0];
    int mn = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        if (mx < arr[i+1] && arr[i] < arr[i+1])
        {
            mx = arr[i+1];
            cnt++;
        }
        else if (mn > arr[i+1] && arr[i] > arr[i+1])
        {
            mn = arr[i+1];
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}