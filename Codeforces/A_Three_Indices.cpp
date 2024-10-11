#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 1; i < n-1; i++)
    {
        if(arr[i-1] < arr[i] && arr[i+1] < arr[i])
        {
            cout << "YES" << nl;
            cout << i << " " << i+1 << " " << i+2 << nl; // increased +1 because 1-based index
            return;
        }
    }
    cout << "NO" << nl;
}
int main()
{
    int t; cin >> t;
    while(t--) solve();

    return 0;
}