// used test cases
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 505;
char mat[N][N];
bool vis[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool is_valid(int ci, int cj)
{
    if (ci > n || ci <= 0 || cj > m || cj <= 0) // 1-based
        return false;
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;  
        int cj = sj + d[i].second; 

        if (is_valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] != 'X')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) // 1-based
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mat[i][j]; 
        }
    }
    memset(vis, false, sizeof(vis));
    int si, sj, di, dj; cin >> si >> sj >> di >> dj;
    
    bool desCracked = true;
    if(mat[di][dj] == '.') desCracked = false;
 
    mat[di][dj] = '.';
    dfs(si, sj);
    // if(vis[di][dj]) cout << "YES/NO" << nl;
    // else cout << "NO" << nl;

    if(desCracked && vis[di][dj]) 
    {
        // cout << "###" << nl;
        int tot_adj_path = 0;
        for (int i = 0; i < 4; i++)
        {
            int ki = di + d[i].first;
            int kj = dj + d[i].second;
            if(is_valid(ki, kj) && mat[ki][kj] == '.') tot_adj_path++;
            if(is_valid(ki, kj) && (ki == si && kj == sj))
            {
                cout << "YES" << nl; return 0;
            }
        }
        if(tot_adj_path >= 1) cout << "YES" << nl;
        else cout << "NO" << nl;
        return 0;
    }
    else if(!desCracked && vis[di][dj]) 
    {
        // cout << "###" << nl;
        int tot_adj_path = 0;
        bool isMatch = false;
        for (int i = 0; i < 4; i++)
        {
            int ki = di + d[i].first;
            int kj = dj + d[i].second;
            if(is_valid(ki, kj) && mat[ki][kj] == '.') 
            {
                // cout << ki << "," << kj << nl;
                tot_adj_path++;
            }
            if(is_valid(ki, kj) && (ki == si && kj == sj))
            {
                isMatch = true;
            }
        }
        if(tot_adj_path >= 2 || (isMatch && tot_adj_path == 1)) cout << "YES" << nl;
        else cout << "NO" << nl;
        // cout << tot_adj_path << nl;
        return 0;
    }
    else cout << "NO" << nl;

    return 0;
}