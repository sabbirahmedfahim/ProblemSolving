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
    int mx = INT_MIN;
    int mn = INT_MAX;
    int iMx;
    int iMn;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > mx)
        {
            iMx = i;
            mx = arr[i]; 
        }
        if (arr[i] <= mn) // why <= rather than < ?
        {
            iMn = i;
            mn = arr[i];
        }
    }
    if(iMx > iMn) iMn++;
    cout << iMx + (n-1) - iMn;

    return 0;
}