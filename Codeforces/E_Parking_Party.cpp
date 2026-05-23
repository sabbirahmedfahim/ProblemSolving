#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E3 + 5;
int n, m, cnt = 0;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
char mat[N][N];
int vis[N][N];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = s[j];
            // cout << mat[i][j];

            vis[i][j] = false; // reset
        }
        // cout << nl;
    }

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while(j < m && mat[i][j] != 'o')
        {
            if(!vis[i][j])
            {
                cnt++; vis[i][j] = true;
            }

            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int j = m - 1;
        while(j >= 0 && mat[i][j] != 'o')
        {
            if(!vis[i][j])
            {
                cnt++; vis[i][j] = true;
            }

            j--;
        }
    }
    for (int j = 0; j < m; j++)
    {
        int i = 0;
        while(i < n && mat[i][j] != 'o')
        {
            if(!vis[i][j])
            {
                cnt++; vis[i][j] = true;
            }

            i++;
        }
    }
    for (int j = 0; j < m; j++)
    {
        int i = n - 1;
        while(i >= 0 && mat[i][j] != 'o')
        {
            if(!vis[i][j])
            {
                cnt++; vis[i][j] = true;
            }

            i--;
        }
    }

    cout << cnt << nl;


    return 0;
}