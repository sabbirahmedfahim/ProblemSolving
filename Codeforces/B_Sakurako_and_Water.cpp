#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for (int startRow = n - 1; startRow >= 0; startRow--) 
    {
        int row = startRow, col = 0;
        int mn = 0; 
        while (row < n && col < n) 
        {
            // cout << arr[row][col] << " ";
            mn = min(mn, arr[row][col]);
            row++;
            col++;
        }
        // cout << nl;
        ans += mn;
    }
    for (int startCol = 1; startCol < n; startCol++) {
        int row = 0, col = startCol;
        int mn = 0;
        while (row < n && col < n) 
        {
            // cout << arr[row][col] << " ";
            mn = min(mn, arr[row][col]);
            row++;
            col++;
        }
        // cout << nl;
        ans += mn;
    }
    // cout << nl;
    cout << -ans << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}