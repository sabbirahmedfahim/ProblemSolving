#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentOffiers = 0;
    int untreatedCrimes = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == -1 && currentOffiers <= 0) untreatedCrimes++;
        else if(arr[i] == -1 && currentOffiers > 0) currentOffiers--;
        if(arr[i] > 0) currentOffiers+=arr[i];
    }
    cout << untreatedCrimes;

    return 0;
}