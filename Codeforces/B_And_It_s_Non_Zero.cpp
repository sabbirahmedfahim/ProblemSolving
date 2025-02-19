// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 2E5 + 5;
int grid[N][30]; // [bit-position][max range of index]
void solve() // TLE
{
    int l, r; cin >> l >> r;

    vector<int> v(20, 0);
    for (int i = l; i <= r; i++)
    {
        for (int mask = 0; mask <= 18; mask++)
        {
            if((i>>mask) & 1) v[mask]++;
        }
    }
    // print(v);
    int mx = *max_element(all(v)), n = r-l+1;
    cout << n - mx << nl;
}
void preComp()
{
    // nothing but a bitwise representation of 1-2E5 numbers
    memset(grid, 0, sizeof(grid)); // useless, written for understanding the process
    for (int i = 1; i <= N; i++) 
    {       
        int num = i;
        for (int mask = 0; mask < 30; mask++)
        {
            if((num>>mask) & 1) grid[i][mask] = 1; // hahaha, bit on/off checking
        }
    }
    // for (int i = 1; i <= 10; i++) // run this to understand -> bitwise 1 to 2E5
    // {       
    //     int num = i;
    //     for (int mask = 0; mask < 30; mask++)
    //     {
    //         cout << grid[i][mask] << " ";
    //     }
    //     cout << nl << nl;
    // }

    // Prefix Sum of Bitwise Counts
    for (int mask = 0; mask < 30; mask++)
    {
        for (int i = 1; i <= N; i++)
        {
            grid[i][mask] += grid[i-1][mask];
        }
    }
    // for (int mask = 0; mask < 30; mask++) // didn't understand yet
    // {
    //     for (int i = 1; i <= 10; i++)
    //     {
    //         cout << grid[i][mask] << " ";
    //     }
    //     cout << nl << nl;
    // }
}
void solve2()
{
    int l, r; cin >> l >> r;
    int n = r-l+1;
    int mx = 0;

    for (int mask = 0; mask < 30; mask++)
    {
        mx = max(mx, grid[r][mask] - grid[l-1][mask]);
    }

    cout << n - mx << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    preComp(); // avoid TLE

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        // solve();
        solve2();
    }

    return 0;
}