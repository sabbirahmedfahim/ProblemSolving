#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
// why a-1? instead of a? 
// think the test case:
// 1
// 5 3 3
// 1 1 5
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            b += min(a - 1, arr[i]); 
        }
        cout << b << nl;
    }

    return 0;
}