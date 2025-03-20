#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 105;
int n, m; 
int grid1[N][N];
int grid2[N][N];
int grid3[N][N];
void printGrid()
{
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            grid3[i][j] = grid1[i][j] + grid2[i][j];
            // cout << grid3[i][j] << ' ';
        }
        // cout << nl;
    }
    

    return 0;
}