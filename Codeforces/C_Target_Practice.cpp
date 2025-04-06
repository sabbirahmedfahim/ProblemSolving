#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

vector<vector<int> > mat = 
    {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
     {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
     {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
     {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
     {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };
void solve()
{
    char grid[10][10];

    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        string x; cin >> x;
        for (int j = 0; j < x.size(); j++)
        {
            grid[i][j] = x[j];
            if(grid[i][j] == 'X') 
            {
                res += mat[i][j];
                // cout<< mat[i][j] << " ";
            }
        }
    }
    
    cout << res << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}