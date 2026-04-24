#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
int mat[N][N]; // adjust data type ***
int n, m;
bool vis[N][N];
vector<pair<int, int> > d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool is_valid(int ci, int cj)
{
    return (ci < n && ci >= 0 && cj < m && cj >= 0);
}

void bfs(int si, int sj) 
{
    queue<pair<int, int> > q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;

            // careful with mixed-type comparisons (e.g., char vs int)
            if(is_valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == 1) 
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        // string s; cin >> s;
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int numOfBorders = 0, numOfIcelands = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if((i == 0 || i == n - 1 || j == 0 || j == m - 1) && mat[i][j] == '1' && !vis[i][j])
            {
                bfs(i, j);

                numOfBorders++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == 1 && !vis[i][j])
            {
                bfs(i, j);

                numOfIcelands++;
            }
        }
    }
    
    if(numOfBorders > numOfIcelands) cout << "Yes" << nl;
    else cout << "No" << nl;

    cout << numOfBorders << " " << numOfIcelands << nl;

 
    return 0;
}