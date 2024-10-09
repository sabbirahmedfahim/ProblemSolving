#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = 0;
    int cnt = 0;
    for (int i = 1; i < n-1; i++)
    {
        // cout << arr[i-1] << " " << arr[i] << " " << gcd(arr[i-1], arr[i]) << nl;
        if(arr[i-1] < arr[i] && gcd(arr[i-1], arr[i]) != 1)  
        {
            cnt++;
            mx = max(mx, cnt);
        }
        else 
        {
            arr[i] = arr[i-1];
        }
    }
    cout << mx;

    return 0;
}