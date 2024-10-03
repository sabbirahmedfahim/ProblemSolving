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
        int n, k; cin >> n >> k;
        ll arr[n];
        ll robinHasGold = 0;
        ll robinGivesGold = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0 && robinHasGold > 0) 
            {
                robinHasGold--;
                robinGivesGold++;
            }
            else if(arr[i] >= k) robinHasGold+=arr[i];
        }
        cout << robinGivesGold << nl;
    }

    return 0;
}