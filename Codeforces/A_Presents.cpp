#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        // cin >> arr[i];
        int data;
        cin >> data;
        arr[data] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

return 0;
}