#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll inf = 1e18;
int main()
{
    int n, e;
    cin >> n >> e;
    ll adj[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = inf;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (adj[a][b] > c) adj[a][b] = c;
        // if (adj[b][a] > c) adj[b][a] = c; // if the graph is undirected
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (adj[i][i] < 0)
        {
            cout << "AVAST! TIME WARP DETECTED!";
            return 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}