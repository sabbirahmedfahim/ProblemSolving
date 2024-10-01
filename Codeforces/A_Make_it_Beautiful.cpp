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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int prefSum[n];
        prefSum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefSum[i] = arr[i] + prefSum[i-1];
        }
        for (int i = 1; i < n; i++)
        {
            if(prefSum[i-1] == arr[i]) swap(arr[i-1], arr[i]);
        }
        prefSum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefSum[i] = arr[i] + prefSum[i-1];
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if(prefSum[i-1] == arr[i]) 
            {
                flag = false;
                break;
            }
        }
        if(n==1) cout << "NO" << nl;
        else if(!flag) cout << "NO" << nl;
        else 
        {
            cout << "YES" << nl;
            for(auto data : arr) cout << data << " ";
            cout << nl;
        }
    }

    return 0;
}