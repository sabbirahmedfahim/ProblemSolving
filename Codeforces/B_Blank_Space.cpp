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
        int cnt = 0;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0) mx++;
            else mx = 0;
            cnt = max(mx, cnt);
        }
        cout << cnt << nl;
    }

    return 0;
}