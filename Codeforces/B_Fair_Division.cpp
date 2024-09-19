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
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
                cnt2++;
            else
                cnt1++;
        }
        if (cnt1 % 2 == 0 && cnt2 % 2 == 0) cout << "YES" << nl;
        else if (cnt1 % 2 == 0 && cnt2 % 2 != 0) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}