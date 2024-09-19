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
        for (int i = 0; i < n; i++) cin >> arr[i];
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0 && arr[i+1] % 2 == 0) 
            {
                cnt++;
                swap(arr[i], arr[i+1]);
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0) flag = false;
            else if (i % 2 != 0 && arr[i] % 2 == 0) flag = false;   
        }
        if(!flag) cout << -1 << nl;
        else cout << cnt << nl;
    }

    return 0;
}