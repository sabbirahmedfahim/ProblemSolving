// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int> (n));

    for (int i = 0; i < n; i++)
    {
        int low = 1, high = n;
        for (int j = 0; j < n; j++)
        {
            if(i%2 == 0) grid[i][j] = low++;
            else grid[i][j] = high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}